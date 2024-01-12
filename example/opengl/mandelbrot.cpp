/*
    MANGO Multimedia Development Platform
    Copyright (C) 2012-2024 Twilight Finland 3D Oy Ltd. All rights reserved.
*/
#include <mango/mango.hpp>
#include <mango/opengl/opengl.hpp>

using namespace mango;
using namespace mango::image;

static inline
u32 nColor(int n)
{
    u8 r = n;
    u8 g = std::min(255, n + n / 3);
    u8 b = std::min(255, n + n / 2);
    return makeRGBA(r, g, b, 255);
}

class DemoWindow : public OpenGLFramebuffer
{
protected:
    Timer timer;
    u64 prev_time;
    u64 frames = 0;
    float color = 0;

public:
    DemoWindow(int width, int height)
        : OpenGLFramebuffer(width, height)
    {
        setVisible(true);
        setTitle("[DemoWindow] Initializing...");
        prev_time = timer.us();
    }

    ~DemoWindow()
    {
    }

    void onKeyPress(Keycode key, u32 mask) override
    {
        if (key == KEYCODE_ESC)
            breakEventLoop();
    }

    void onIdle() override
    {
        onDraw();
    }

    void onDraw() override
    {
        u64 time = timer.us();
        u64 diff = time - prev_time;
        ++frames;
        if (diff > 1000000 / 4)
        {
            diff = diff / frames;
            frames = 0;
            prev_time = time;
            std::string text = fmt::format("[Mandelbrot]  time: {:.2f} ms ({} fps)", diff / 1000.0f, diff ? 1000000 / diff : 0);
            setTitle(text);
        }

        Surface s = lock();
        mandelbrot(s);
        unlock();
        present();
    }

    void mandelbrot(Surface s)
    {
        int width = s.width;
        int height = s.height;

        double px = -0.156653458;
        double py = 1.039128122;

        static double scale = 4.0;
        static double angle = 0.0f;
        scale *= 0.993f;
        angle -= 0.003f;

        double ax = sin(angle) * scale;
        double ay = cos(angle) * scale;
        double bx = cos(angle) * scale;
        double by =-sin(angle) * scale;

        double u0 = px - ax * 0.5 - ay * 0.5;
        double v0 = py - bx * 0.5 - by * 0.5;
        double dxdu = ax / width;
        double dxdv = ay / width;
        double dydu = bx / height;
        double dydv = by / height;

        ConcurrentQueue q;

#if 0

        // scalar mandelbrot

        for (int y = 0; y < height; ++y)
        {
            q.enqueue([this, &s, width, y, u0, v0, dxdu, dxdv, dydu, dydv]
            {
                u32* scan = s.address<u32>(0, y);

                for (int x = 0; x < width; ++x)
                {
                    const int nmax = 255;
                    int n = 0;

                    double zr = u0 + dxdu * x + dydu * y;
                    double zi = v0 + dxdv * x + dydv * y;

                    double zr0 = zr;
                    double zi0 = zi;

                    while (++n < nmax)
                    {
                        double temp = zr * zr - zi * zi + zr0;
                        zi = (zr + zr) * zi + zi0;
                        zr = temp;

                        if (zr *zr + zi * zr >= 4.0)
                            break;
                    }

                    scan[x] = nColor(n);
                }
            });
        }

#else

        // simd mandelbrot

        for (int y = 0; y < height; ++y)
        {
            q.enqueue([&s, width, y, u0, v0, dxdu, dxdv, dydu, dydv]
            {
                u32* scan = s.address<u32>(0, y);

                const math::float64x4 four(4);
                const math::int64x4 one(1);

                double u = u0 + dydu * y;
                double v = v0 + dydv * y;

                const math::float64x4 ascend = math::float64x4::ascend(); // [0, 1, 2, 3]
                math::float64x4 cr = ascend * dxdu + u;
                math::float64x4 ci = ascend * dxdv + v;

                const math::float64x4 ustep = dxdu * 4.0;
                const math::float64x4 vstep = dxdv * 4.0;

                for (int x = 0; x < width; x += 4)
                {
                    const int nmax = 255;
                    int n = 0;

                    math::float64x4 zr = cr;
                    math::float64x4 zi = ci;

                    math::int64x4 count(n);

                    while (++n < nmax)
                    {
                        math::float64x4 zr2 = zr * zr;
                        math::float64x4 zi2 = zi * zi;
                        math::float64x4 zrzi = zr * zi;
                        zr = cr + zr2 - zi2;
                        zi = ci + zrzi + zrzi;

                        math::mask64x4 mask = (zr2 + zi2) < four;
                        count = math::select(mask, count + one, count);

                        if (math::none_of(mask))
                            break;
                    }

                    cr += ustep;
                    ci += vstep;

                    scan[x + 0] = nColor(count[0]);
                    scan[x + 1] = nColor(count[1]);
                    scan[x + 2] = nColor(count[2]);
                    scan[x + 3] = nColor(count[3]);
                }
            });
        }

#endif

        q.wait();
    }
};

int main(int argc, const char* argv[])
{
    DemoWindow demo(640, 640);
    demo.enterEventLoop();
}
