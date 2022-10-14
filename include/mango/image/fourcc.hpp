/*
    MANGO Multimedia Development Platform
    Copyright (C) 2012-2021 Twilight Finland 3D Oy Ltd. All rights reserved.
*/
#pragma once

#include <mango/core/bits.hpp>

namespace mango::image
{

    enum : u32
    {
        FOURCC_NONE       = u32_mask(0, 0, 0, 0),

        FOURCC_DXT1       = u32_mask('D', 'X', 'T', '1'),
        FOURCC_DXT2       = u32_mask('D', 'X', 'T', '2'),
        FOURCC_DXT3       = u32_mask('D', 'X', 'T', '3'),
        FOURCC_DXT4       = u32_mask('D', 'X', 'T', '4'),
        FOURCC_DXT5       = u32_mask('D', 'X', 'T', '5'),

        FOURCC_ATI1       = u32_mask('A', 'T', 'I', '1'), // same as: BC4U
        FOURCC_AT1N       = u32_mask('A', 'T', '1', 'N'), // same as: BC4U
        FOURCC_3DC1       = u32_mask('3', 'D', 'C', '1'), // same as: BC4U

        FOURCC_ATI2       = u32_mask('A', 'T', 'I', '2'), // same as: BC5U
        FOURCC_AT2N       = u32_mask('A', 'T', '2', 'N'), // same as: BC5U
        FOURCC_3DC2       = u32_mask('3', 'D', 'C', '2'), // same as: BC5U

        FOURCC_BC4U       = u32_mask('B', 'C', '4', 'U'),
        FOURCC_BC4S       = u32_mask('B', 'C', '4', 'S'),
        FOURCC_BC5U       = u32_mask('B', 'C', '5', 'U'),
        FOURCC_BC5S       = u32_mask('B', 'C', '5', 'S'),
        FOURCC_BC6H       = u32_mask('B', 'C', '6', 'H'),
        FOURCC_BC7U       = u32_mask('B', 'C', '7', 'U'),

        FOURCC_PTC1       = u32_mask('P', 'T', 'C', '1'),
        FOURCC_PTC2       = u32_mask('P', 'T', 'C', '2'),
        FOURCC_PTC3       = u32_mask('P', 'T', 'C', '3'),
        FOURCC_PTC4       = u32_mask('P', 'T', 'C', '4'),

        FOURCC_ATC        = u32_mask('A', 'T', 'C', ' '),
        FOURCC_ATCE       = u32_mask('A', 'T', 'C', 'E'),
        FOURCC_ATCI       = u32_mask('A', 'T', 'C', 'I'),

        FOURCC_ETC        = u32_mask('E', 'T', 'C', ' '),
        FOURCC_ETC1       = u32_mask('E', 'T', 'C', '1'),
        FOURCC_ETC2       = u32_mask('E', 'T', 'C', '2'),
        FOURCC_ET2A       = u32_mask('E', 'T', '2', 'A'),

        FOURCC_ASTC4x4    = u32_mask('A', 'S', '4', '4'),
        FOURCC_ASTC5x5    = u32_mask('A', 'S', '5', '5'),
        FOURCC_ASTC6x6    = u32_mask('A', 'S', '6', '6'),
        FOURCC_ASTC8x5    = u32_mask('A', 'S', '8', '5'),
        FOURCC_ASTC8x6    = u32_mask('A', 'S', '8', '6'),
        FOURCC_ASTC10x5   = u32_mask('A', 'S', ':', '5'),

        FOURCC_UYVY       = u32_mask('U', 'Y', 'V', 'Y'),
        FOURCC_YUY2       = u32_mask('Y', 'U', 'Y', '2'),
        FOURCC_G8R8G8B8   = u32_mask('G', 'R', 'G', 'B'),
        FOURCC_R8G8B8G8   = u32_mask('R', 'G', 'B', 'G'),
        FOURCC_RXGB       = u32_mask('R', 'X', 'G', 'B'),
    };

} // namespace mango::image

namespace mango::dxgi
{

    // Microsoft DirectX Graphics Infrastructure

    enum TextureFormat : u32
    {
        FORMAT_UNKNOWN                     = 0,
        FORMAT_R32G32B32A32_TYPELESS       = 1,
        FORMAT_R32G32B32A32_FLOAT          = 2,
        FORMAT_R32G32B32A32_UINT           = 3,
        FORMAT_R32G32B32A32_SINT           = 4,
        FORMAT_R32G32B32_TYPELESS          = 5,
        FORMAT_R32G32B32_FLOAT             = 6,
        FORMAT_R32G32B32_UINT              = 7,
        FORMAT_R32G32B32_SINT              = 8,
        FORMAT_R16G16B16A16_TYPELESS       = 9,
        FORMAT_R16G16B16A16_FLOAT          = 10,
        FORMAT_R16G16B16A16_UNORM          = 11,
        FORMAT_R16G16B16A16_UINT           = 12,
        FORMAT_R16G16B16A16_SNORM          = 13,
        FORMAT_R16G16B16A16_SINT           = 14,
        FORMAT_R32G32_TYPELESS             = 15,
        FORMAT_R32G32_FLOAT                = 16,
        FORMAT_R32G32_UINT                 = 17,
        FORMAT_R32G32_SINT                 = 18,
        FORMAT_R32G8X24_TYPELESS           = 19,
        FORMAT_D32_FLOAT_S8X24_UINT        = 20,
        FORMAT_R32_FLOAT_X8X24_TYPELESS    = 21,
        FORMAT_X32_TYPELESS_G8X24_UINT     = 22,
        FORMAT_R10G10B10A2_TYPELESS        = 23,
        FORMAT_R10G10B10A2_UNORM           = 24,
        FORMAT_R10G10B10A2_UINT            = 25,
        FORMAT_R11G11B10_FLOAT             = 26,
        FORMAT_R8G8B8A8_TYPELESS           = 27,
        FORMAT_R8G8B8A8_UNORM              = 28,
        FORMAT_R8G8B8A8_UNORM_SRGB         = 29,
        FORMAT_R8G8B8A8_UINT               = 30,
        FORMAT_R8G8B8A8_SNORM              = 31,
        FORMAT_R8G8B8A8_SINT               = 32,
        FORMAT_R16G16_TYPELESS             = 33,
        FORMAT_R16G16_FLOAT                = 34,
        FORMAT_R16G16_UNORM                = 35,
        FORMAT_R16G16_UINT                 = 36,
        FORMAT_R16G16_SNORM                = 37,
        FORMAT_R16G16_SINT                 = 38,
        FORMAT_R32_TYPELESS                = 39,
        FORMAT_D32_FLOAT                   = 40,
        FORMAT_R32_FLOAT                   = 41,
        FORMAT_R32_UINT                    = 42,
        FORMAT_R32_SINT                    = 43,
        FORMAT_R24G8_TYPELESS              = 44,
        FORMAT_D24_UNORM_S8_UINT           = 45,
        FORMAT_R24_UNORM_X8_TYPELESS       = 46,
        FORMAT_X24_TYPELESS_G8_UINT        = 47,
        FORMAT_R8G8_TYPELESS               = 48,
        FORMAT_R8G8_UNORM                  = 49,
        FORMAT_R8G8_UINT                   = 50,
        FORMAT_R8G8_SNORM                  = 51,
        FORMAT_R8G8_SINT                   = 52,
        FORMAT_R16_TYPELESS                = 53,
        FORMAT_R16_FLOAT                   = 54,
        FORMAT_D16_UNORM                   = 55,
        FORMAT_R16_UNORM                   = 56,
        FORMAT_R16_UINT                    = 57,
        FORMAT_R16_SNORM                   = 58,
        FORMAT_R16_SINT                    = 59,
        FORMAT_R8_TYPELESS                 = 60,
        FORMAT_R8_UNORM                    = 61,
        FORMAT_R8_UINT                     = 62,
        FORMAT_R8_SNORM                    = 63,
        FORMAT_R8_SINT                     = 64,
        FORMAT_A8_UNORM                    = 65,
        FORMAT_R1_UNORM                    = 66,
        FORMAT_R9G9B9E5_SHAREDEXP          = 67,
        FORMAT_R8G8_B8G8_UNORM             = 68,
        FORMAT_G8R8_G8B8_UNORM             = 69,
        FORMAT_BC1_TYPELESS                = 70,
        FORMAT_BC1_UNORM                   = 71,
        FORMAT_BC1_UNORM_SRGB              = 72,
        FORMAT_BC2_TYPELESS                = 73,
        FORMAT_BC2_UNORM                   = 74,
        FORMAT_BC2_UNORM_SRGB              = 75,
        FORMAT_BC3_TYPELESS                = 76,
        FORMAT_BC3_UNORM                   = 77,
        FORMAT_BC3_UNORM_SRGB              = 78,
        FORMAT_BC4_TYPELESS                = 79,
        FORMAT_BC4_UNORM                   = 80,
        FORMAT_BC4_SNORM                   = 81,
        FORMAT_BC5_TYPELESS                = 82,
        FORMAT_BC5_UNORM                   = 83,
        FORMAT_BC5_SNORM                   = 84,
        FORMAT_B5G6R5_UNORM                = 85,
        FORMAT_B5G5R5A1_UNORM              = 86,
        FORMAT_B8G8R8A8_UNORM              = 87,
        FORMAT_B8G8R8X8_UNORM              = 88,
        FORMAT_R10G10B10_XR_BIAS_A2_UNORM  = 89,
        FORMAT_B8G8R8A8_TYPELESS           = 90,
        FORMAT_B8G8R8A8_UNORM_SRGB         = 91,
        FORMAT_B8G8R8X8_TYPELESS           = 92,
        FORMAT_B8G8R8X8_UNORM_SRGB         = 93,
        FORMAT_BC6H_TYPELESS               = 94,
        FORMAT_BC6H_UF16                   = 95,
        FORMAT_BC6H_SF16                   = 96,
        FORMAT_BC7_TYPELESS                = 97,
        FORMAT_BC7_UNORM                   = 98,
        FORMAT_BC7_UNORM_SRGB              = 99,
        FORMAT_AYUV                        = 100,
        FORMAT_Y410                        = 101,
        FORMAT_Y416                        = 102,
        FORMAT_NV12                        = 103,
        FORMAT_P010                        = 104,
        FORMAT_P016                        = 105,
        FORMAT_420_OPAQUE                  = 106,
        FORMAT_YUY2                        = 107,
        FORMAT_Y210                        = 108,
        FORMAT_Y216                        = 109,
        FORMAT_NV11                        = 110,
        FORMAT_AI44                        = 111,
        FORMAT_IA44                        = 112,
        FORMAT_P8                          = 113,
        FORMAT_A8P8                        = 114,
        FORMAT_B4G4R4A4_UNORM              = 115,
        FORMAT_P208                        = 130,
        FORMAT_V208                        = 131,
        FORMAT_V408                        = 132,
        FORMAT_ASTC_4X4_TYPELESS           = 133,
        FORMAT_ASTC_4X4_UNORM              = 134,
        FORMAT_ASTC_4X4_UNORM_SRGB         = 135,
        FORMAT_ASTC_5X4_TYPELESS           = 137,
        FORMAT_ASTC_5X4_UNORM              = 138,
        FORMAT_ASTC_5X4_UNORM_SRGB         = 139,
        FORMAT_ASTC_5X5_TYPELESS           = 141,
        FORMAT_ASTC_5X5_UNORM              = 142,
        FORMAT_ASTC_5X5_UNORM_SRGB         = 143,
        FORMAT_ASTC_6X5_TYPELESS           = 145,
        FORMAT_ASTC_6X5_UNORM              = 146,
        FORMAT_ASTC_6X5_UNORM_SRGB         = 147,
        FORMAT_ASTC_6X6_TYPELESS           = 149,
        FORMAT_ASTC_6X6_UNORM              = 150,
        FORMAT_ASTC_6X6_UNORM_SRGB         = 151,
        FORMAT_ASTC_8X5_TYPELESS           = 153,
        FORMAT_ASTC_8X5_UNORM              = 154,
        FORMAT_ASTC_8X5_UNORM_SRGB         = 155,
        FORMAT_ASTC_8X6_TYPELESS           = 157,
        FORMAT_ASTC_8X6_UNORM              = 158,
        FORMAT_ASTC_8X6_UNORM_SRGB         = 159,
        FORMAT_ASTC_8X8_TYPELESS           = 161,
        FORMAT_ASTC_8X8_UNORM              = 162,
        FORMAT_ASTC_8X8_UNORM_SRGB         = 163,
        FORMAT_ASTC_10X5_TYPELESS          = 165,
        FORMAT_ASTC_10X5_UNORM             = 166,
        FORMAT_ASTC_10X5_UNORM_SRGB        = 167,
        FORMAT_ASTC_10X6_TYPELESS          = 169,
        FORMAT_ASTC_10X6_UNORM             = 170,
        FORMAT_ASTC_10X6_UNORM_SRGB        = 171,
        FORMAT_ASTC_10X8_TYPELESS          = 173,
        FORMAT_ASTC_10X8_UNORM             = 174,
        FORMAT_ASTC_10X8_UNORM_SRGB        = 175,
        FORMAT_ASTC_10X10_TYPELESS         = 177,
        FORMAT_ASTC_10X10_UNORM            = 178,
        FORMAT_ASTC_10X10_UNORM_SRGB       = 179,
        FORMAT_ASTC_12X10_TYPELESS         = 181,
        FORMAT_ASTC_12X10_UNORM            = 182,
        FORMAT_ASTC_12X10_UNORM_SRGB       = 183,
        FORMAT_ASTC_12X12_TYPELESS         = 185,
        FORMAT_ASTC_12X12_UNORM            = 186,
        FORMAT_ASTC_12X12_UNORM_SRGB       = 187,
    };

} // namespace mango::dxgi

namespace mango::opengl
{

    // OpenGL Compressed Texture Formats

    enum TextureFormat : u32
    {
        // 3DFX_texture_compression_FXT1
	    COMPRESSED_RGB_FXT1_3DFX                    = 0x86B0,
	    COMPRESSED_RGBA_FXT1_3DFX                   = 0x86B1,

        // AMD_compressed_ATC_texture
        ATC_RGB_AMD                                 = 0x8C92,
        ATC_RGBA_EXPLICIT_ALPHA_AMD                 = 0x8C93,
        ATC_RGBA_INTERPOLATED_ALPHA_AMD             = 0x87EE,

        // AMD_compressed_3DC_texture
        AMD_3DC_X                                   = 0x87F9, // COMPRESSED_RED_RGTC1
        AMD_3DC_XY                                  = 0x87FA, // COMPRESSED_RED_GREEN_RGTC2

        // LATC
        COMPRESSED_LUMINANCE_LATC1_EXT              = 0x8C70,
        COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT       = 0x8C71,
        COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT        = 0x8C72,
        COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT = 0x8C73,

        // DXT
        COMPRESSED_RGB_S3TC_DXT1_EXT                = 0x83F0,
        COMPRESSED_RGBA_S3TC_DXT1_EXT               = 0x83F1,
        COMPRESSED_RGBA_S3TC_DXT3_EXT               = 0x83F2,
        COMPRESSED_RGBA_S3TC_DXT5_EXT               = 0x83F3,
        COMPRESSED_SRGB_S3TC_DXT1_EXT               = 0x8C4C,
        COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT         = 0x8C4D,
        COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT         = 0x8C4E,
        COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT         = 0x8C4F,

        // RGTC
        COMPRESSED_RED_RGTC1                        = 0x8DBB,
        COMPRESSED_SIGNED_RED_RGTC1                 = 0x8DBC,
        COMPRESSED_RG_RGTC2                         = 0x8DBD,
        COMPRESSED_SIGNED_RG_RGTC2                  = 0x8DBE,

        // BPTC
        COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT          = 0x8E8F,
        COMPRESSED_RGB_BPTC_SIGNED_FLOAT            = 0x8E8E,
        COMPRESSED_RGBA_BPTC_UNORM                  = 0x8E8C,
        COMPRESSED_SRGB_ALPHA_BPTC_UNORM            = 0x8E8D,

        // OES_compressed_ETC1_RGB8_texture
        ETC1_RGB8_OES                               = 0x8D64,

        // ETC2 / EAC
        COMPRESSED_R11_EAC                          = 0x9270,
        COMPRESSED_SIGNED_R11_EAC                   = 0x9271,
        COMPRESSED_RG11_EAC                         = 0x9272,
        COMPRESSED_SIGNED_RG11_EAC                  = 0x9273,
        COMPRESSED_RGB8_ETC2                        = 0x9274,
        COMPRESSED_SRGB8_ETC2                       = 0x9275,
        COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2    = 0x9276,
        COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2   = 0x9277,
        COMPRESSED_RGBA8_ETC2_EAC                   = 0x9278,
        COMPRESSED_SRGB8_ALPHA8_ETC2_EAC            = 0x9279,

        // IMG_texture_compression_pvrtc
        COMPRESSED_RGB_PVRTC_4BPPV1_IMG             = 0x8C00,
        COMPRESSED_RGB_PVRTC_2BPPV1_IMG             = 0x8C01,
        COMPRESSED_RGBA_PVRTC_4BPPV1_IMG            = 0x8C02,
        COMPRESSED_RGBA_PVRTC_2BPPV1_IMG            = 0x8C03,

        // IMG_texture_compression_pvrtc2
        COMPRESSED_RGBA_PVRTC_2BPPV2_IMG            = 0x9137,
        COMPRESSED_RGBA_PVRTC_4BPPV2_IMG            = 0x9138,

        // EXT_pvrtc_sRGB
        COMPRESSED_SRGB_PVRTC_2BPPV1_EXT            = 0x8A54,
        COMPRESSED_SRGB_PVRTC_4BPPV1_EXT            = 0x8A55,
        COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT      = 0x8A56,
        COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT      = 0x8A57,

        // KHR_texture_compression_astc_ldr
        // KHR_texture_compression_astc_hdr
        COMPRESSED_RGBA_ASTC_4x4_KHR                = 0x93B0,
        COMPRESSED_RGBA_ASTC_5x4_KHR                = 0x93B1,
        COMPRESSED_RGBA_ASTC_5x5_KHR                = 0x93B2,
        COMPRESSED_RGBA_ASTC_6x5_KHR                = 0x93B3,
        COMPRESSED_RGBA_ASTC_6x6_KHR                = 0x93B4,
        COMPRESSED_RGBA_ASTC_8x5_KHR                = 0x93B5,
        COMPRESSED_RGBA_ASTC_8x6_KHR                = 0x93B6,
        COMPRESSED_RGBA_ASTC_8x8_KHR                = 0x93B7,
        COMPRESSED_RGBA_ASTC_10x5_KHR               = 0x93B8,
        COMPRESSED_RGBA_ASTC_10x6_KHR               = 0x93B9,
        COMPRESSED_RGBA_ASTC_10x8_KHR               = 0x93BA,
        COMPRESSED_RGBA_ASTC_10x10_KHR              = 0x93BB,
        COMPRESSED_RGBA_ASTC_12x10_KHR              = 0x93BC,
        COMPRESSED_RGBA_ASTC_12x12_KHR              = 0x93BD,
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR        = 0x93D0,
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR        = 0x93D1,
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR        = 0x93D2,
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR        = 0x93D3,
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR        = 0x93D4,
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR        = 0x93D5,
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR        = 0x93D6,
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR        = 0x93D7,
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR       = 0x93D8,
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR       = 0x93D9,
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR       = 0x93DA,
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR      = 0x93DB,
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR      = 0x93DC,
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR      = 0x93DD,

        // OES_texture_compression_astc
        COMPRESSED_RGBA_ASTC_3x3x3_OES              = 0x93C0,
        COMPRESSED_RGBA_ASTC_4x3x3_OES              = 0x93C1,
        COMPRESSED_RGBA_ASTC_4x4x3_OES              = 0x93C2,
        COMPRESSED_RGBA_ASTC_4x4x4_OES              = 0x93C3,
        COMPRESSED_RGBA_ASTC_5x4x4_OES              = 0x93C4,
        COMPRESSED_RGBA_ASTC_5x5x4_OES              = 0x93C5,
        COMPRESSED_RGBA_ASTC_5x5x5_OES              = 0x93C6,
        COMPRESSED_RGBA_ASTC_6x5x5_OES              = 0x93C7,
        COMPRESSED_RGBA_ASTC_6x6x5_OES              = 0x93C8,
        COMPRESSED_RGBA_ASTC_6x6x6_OES              = 0x93C9,
        COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES      = 0x93E0,
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES      = 0x93E1,
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES      = 0x93E2,
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES      = 0x93E3,
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES      = 0x93E4,
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES      = 0x93E5,
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES      = 0x93E6,
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES      = 0x93E7,
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES      = 0x93E8,
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES      = 0x93E9,
    };

} // namespace mango::opengl

namespace mango::vulkan
{

    // Vulkan Image Formats

    enum TextureFormat : u32
    {
        FORMAT_UNDEFINED = 0,
        FORMAT_R4G4_UNORM_PACK8 = 1,
        FORMAT_R4G4B4A4_UNORM_PACK16 = 2,
        FORMAT_B4G4R4A4_UNORM_PACK16 = 3,
        FORMAT_R5G6B5_UNORM_PACK16 = 4,
        FORMAT_B5G6R5_UNORM_PACK16 = 5,
        FORMAT_R5G5B5A1_UNORM_PACK16 = 6,
        FORMAT_B5G5R5A1_UNORM_PACK16 = 7,
        FORMAT_A1R5G5B5_UNORM_PACK16 = 8,
        FORMAT_R8_UNORM = 9,
        FORMAT_R8_SNORM = 10,
        FORMAT_R8_USCALED = 11,
        FORMAT_R8_SSCALED = 12,
        FORMAT_R8_UINT = 13,
        FORMAT_R8_SINT = 14,
        FORMAT_R8_SRGB = 15,
        FORMAT_R8G8_UNORM = 16,
        FORMAT_R8G8_SNORM = 17,
        FORMAT_R8G8_USCALED = 18,
        FORMAT_R8G8_SSCALED = 19,
        FORMAT_R8G8_UINT = 20,
        FORMAT_R8G8_SINT = 21,
        FORMAT_R8G8_SRGB = 22,
        FORMAT_R8G8B8_UNORM = 23,
        FORMAT_R8G8B8_SNORM = 24,
        FORMAT_R8G8B8_USCALED = 25,
        FORMAT_R8G8B8_SSCALED = 26,
        FORMAT_R8G8B8_UINT = 27,
        FORMAT_R8G8B8_SINT = 28,
        FORMAT_R8G8B8_SRGB = 29,
        FORMAT_B8G8R8_UNORM = 30,
        FORMAT_B8G8R8_SNORM = 31,
        FORMAT_B8G8R8_USCALED = 32,
        FORMAT_B8G8R8_SSCALED = 33,
        FORMAT_B8G8R8_UINT = 34,
        FORMAT_B8G8R8_SINT = 35,
        FORMAT_B8G8R8_SRGB = 36,
        FORMAT_R8G8B8A8_UNORM = 37,
        FORMAT_R8G8B8A8_SNORM = 38,
        FORMAT_R8G8B8A8_USCALED = 39,
        FORMAT_R8G8B8A8_SSCALED = 40,
        FORMAT_R8G8B8A8_UINT = 41,
        FORMAT_R8G8B8A8_SINT = 42,
        FORMAT_R8G8B8A8_SRGB = 43,
        FORMAT_B8G8R8A8_UNORM = 44,
        FORMAT_B8G8R8A8_SNORM = 45,
        FORMAT_B8G8R8A8_USCALED = 46,
        FORMAT_B8G8R8A8_SSCALED = 47,
        FORMAT_B8G8R8A8_UINT = 48,
        FORMAT_B8G8R8A8_SINT = 49,
        FORMAT_B8G8R8A8_SRGB = 50,
        FORMAT_A8B8G8R8_UNORM_PACK32 = 51,
        FORMAT_A8B8G8R8_SNORM_PACK32 = 52,
        FORMAT_A8B8G8R8_USCALED_PACK32 = 53,
        FORMAT_A8B8G8R8_SSCALED_PACK32 = 54,
        FORMAT_A8B8G8R8_UINT_PACK32 = 55,
        FORMAT_A8B8G8R8_SINT_PACK32 = 56,
        FORMAT_A8B8G8R8_SRGB_PACK32 = 57,
        FORMAT_A2R10G10B10_UNORM_PACK32 = 58,
        FORMAT_A2R10G10B10_SNORM_PACK32 = 59,
        FORMAT_A2R10G10B10_USCALED_PACK32 = 60,
        FORMAT_A2R10G10B10_SSCALED_PACK32 = 61,
        FORMAT_A2R10G10B10_UINT_PACK32 = 62,
        FORMAT_A2R10G10B10_SINT_PACK32 = 63,
        FORMAT_A2B10G10R10_UNORM_PACK32 = 64,
        FORMAT_A2B10G10R10_SNORM_PACK32 = 65,
        FORMAT_A2B10G10R10_USCALED_PACK32 = 66,
        FORMAT_A2B10G10R10_SSCALED_PACK32 = 67,
        FORMAT_A2B10G10R10_UINT_PACK32 = 68,
        FORMAT_A2B10G10R10_SINT_PACK32 = 69,
        FORMAT_R16_UNORM = 70,
        FORMAT_R16_SNORM = 71,
        FORMAT_R16_USCALED = 72,
        FORMAT_R16_SSCALED = 73,
        FORMAT_R16_UINT = 74,
        FORMAT_R16_SINT = 75,
        FORMAT_R16_SFLOAT = 76,
        FORMAT_R16G16_UNORM = 77,
        FORMAT_R16G16_SNORM = 78,
        FORMAT_R16G16_USCALED = 79,
        FORMAT_R16G16_SSCALED = 80,
        FORMAT_R16G16_UINT = 81,
        FORMAT_R16G16_SINT = 82,
        FORMAT_R16G16_SFLOAT = 83,
        FORMAT_R16G16B16_UNORM = 84,
        FORMAT_R16G16B16_SNORM = 85,
        FORMAT_R16G16B16_USCALED = 86,
        FORMAT_R16G16B16_SSCALED = 87,
        FORMAT_R16G16B16_UINT = 88,
        FORMAT_R16G16B16_SINT = 89,
        FORMAT_R16G16B16_SFLOAT = 90,
        FORMAT_R16G16B16A16_UNORM = 91,
        FORMAT_R16G16B16A16_SNORM = 92,
        FORMAT_R16G16B16A16_USCALED = 93,
        FORMAT_R16G16B16A16_SSCALED = 94,
        FORMAT_R16G16B16A16_UINT = 95,
        FORMAT_R16G16B16A16_SINT = 96,
        FORMAT_R16G16B16A16_SFLOAT = 97,
        FORMAT_R32_UINT = 98,
        FORMAT_R32_SINT = 99,
        FORMAT_R32_SFLOAT = 100,
        FORMAT_R32G32_UINT = 101,
        FORMAT_R32G32_SINT = 102,
        FORMAT_R32G32_SFLOAT = 103,
        FORMAT_R32G32B32_UINT = 104,
        FORMAT_R32G32B32_SINT = 105,
        FORMAT_R32G32B32_SFLOAT = 106,
        FORMAT_R32G32B32A32_UINT = 107,
        FORMAT_R32G32B32A32_SINT = 108,
        FORMAT_R32G32B32A32_SFLOAT = 109,
        FORMAT_R64_UINT = 110,
        FORMAT_R64_SINT = 111,
        FORMAT_R64_SFLOAT = 112,
        FORMAT_R64G64_UINT = 113,
        FORMAT_R64G64_SINT = 114,
        FORMAT_R64G64_SFLOAT = 115,
        FORMAT_R64G64B64_UINT = 116,
        FORMAT_R64G64B64_SINT = 117,
        FORMAT_R64G64B64_SFLOAT = 118,
        FORMAT_R64G64B64A64_UINT = 119,
        FORMAT_R64G64B64A64_SINT = 120,
        FORMAT_R64G64B64A64_SFLOAT = 121,
        FORMAT_B10G11R11_UFLOAT_PACK32 = 122,
        FORMAT_E5B9G9R9_UFLOAT_PACK32 = 123,
        FORMAT_D16_UNORM = 124,
        FORMAT_X8_D24_UNORM_PACK32 = 125,
        FORMAT_D32_SFLOAT = 126,
        FORMAT_S8_UINT = 127,
        FORMAT_D16_UNORM_S8_UINT = 128,
        FORMAT_D24_UNORM_S8_UINT = 129,
        FORMAT_D32_SFLOAT_S8_UINT = 130,
        FORMAT_BC1_RGB_UNORM_BLOCK = 131,
        FORMAT_BC1_RGB_SRGB_BLOCK = 132,
        FORMAT_BC1_RGBA_UNORM_BLOCK = 133,
        FORMAT_BC1_RGBA_SRGB_BLOCK = 134,
        FORMAT_BC2_UNORM_BLOCK = 135,
        FORMAT_BC2_SRGB_BLOCK = 136,
        FORMAT_BC3_UNORM_BLOCK = 137,
        FORMAT_BC3_SRGB_BLOCK = 138,
        FORMAT_BC4_UNORM_BLOCK = 139,
        FORMAT_BC4_SNORM_BLOCK = 140,
        FORMAT_BC5_UNORM_BLOCK = 141,
        FORMAT_BC5_SNORM_BLOCK = 142,
        FORMAT_BC6H_UFLOAT_BLOCK = 143,
        FORMAT_BC6H_SFLOAT_BLOCK = 144,
        FORMAT_BC7_UNORM_BLOCK = 145,
        FORMAT_BC7_SRGB_BLOCK = 146,
        FORMAT_ETC2_R8G8B8_UNORM_BLOCK = 147,
        FORMAT_ETC2_R8G8B8_SRGB_BLOCK = 148,
        FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK = 149,
        FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK = 150,
        FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK = 151,
        FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK = 152,
        FORMAT_EAC_R11_UNORM_BLOCK = 153,
        FORMAT_EAC_R11_SNORM_BLOCK = 154,
        FORMAT_EAC_R11G11_UNORM_BLOCK = 155,
        FORMAT_EAC_R11G11_SNORM_BLOCK = 156,
        FORMAT_ASTC_4x4_UNORM_BLOCK = 157,
        FORMAT_ASTC_4x4_SRGB_BLOCK = 158,
        FORMAT_ASTC_5x4_UNORM_BLOCK = 159,
        FORMAT_ASTC_5x4_SRGB_BLOCK = 160,
        FORMAT_ASTC_5x5_UNORM_BLOCK = 161,
        FORMAT_ASTC_5x5_SRGB_BLOCK = 162,
        FORMAT_ASTC_6x5_UNORM_BLOCK = 163,
        FORMAT_ASTC_6x5_SRGB_BLOCK = 164,
        FORMAT_ASTC_6x6_UNORM_BLOCK = 165,
        FORMAT_ASTC_6x6_SRGB_BLOCK = 166,
        FORMAT_ASTC_8x5_UNORM_BLOCK = 167,
        FORMAT_ASTC_8x5_SRGB_BLOCK = 168,
        FORMAT_ASTC_8x6_UNORM_BLOCK = 169,
        FORMAT_ASTC_8x6_SRGB_BLOCK = 170,
        FORMAT_ASTC_8x8_UNORM_BLOCK = 171,
        FORMAT_ASTC_8x8_SRGB_BLOCK = 172,
        FORMAT_ASTC_10x5_UNORM_BLOCK = 173,
        FORMAT_ASTC_10x5_SRGB_BLOCK = 174,
        FORMAT_ASTC_10x6_UNORM_BLOCK = 175,
        FORMAT_ASTC_10x6_SRGB_BLOCK = 176,
        FORMAT_ASTC_10x8_UNORM_BLOCK = 177,
        FORMAT_ASTC_10x8_SRGB_BLOCK = 178,
        FORMAT_ASTC_10x10_UNORM_BLOCK = 179,
        FORMAT_ASTC_10x10_SRGB_BLOCK = 180,
        FORMAT_ASTC_12x10_UNORM_BLOCK = 181,
        FORMAT_ASTC_12x10_SRGB_BLOCK = 182,
        FORMAT_ASTC_12x12_UNORM_BLOCK = 183,
        FORMAT_ASTC_12x12_SRGB_BLOCK = 184,
        FORMAT_G8B8G8R8_422_UNORM = 1000156000,
        FORMAT_B8G8R8G8_422_UNORM = 1000156001,
        FORMAT_G8_B8_R8_3PLANE_420_UNORM = 1000156002,
        FORMAT_G8_B8R8_2PLANE_420_UNORM = 1000156003,
        FORMAT_G8_B8_R8_3PLANE_422_UNORM = 1000156004,
        FORMAT_G8_B8R8_2PLANE_422_UNORM = 1000156005,
        FORMAT_G8_B8_R8_3PLANE_444_UNORM = 1000156006,
        FORMAT_R10X6_UNORM_PACK16 = 1000156007,
        FORMAT_R10X6G10X6_UNORM_2PACK16 = 1000156008,
        FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16 = 1000156009,
        FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16 = 1000156010,
        FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16 = 1000156011,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16 = 1000156012,
        FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16 = 1000156013,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16 = 1000156014,
        FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16 = 1000156015,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16 = 1000156016,
        FORMAT_R12X4_UNORM_PACK16 = 1000156017,
        FORMAT_R12X4G12X4_UNORM_2PACK16 = 1000156018,
        FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16 = 1000156019,
        FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16 = 1000156020,
        FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16 = 1000156021,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16 = 1000156022,
        FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16 = 1000156023,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16 = 1000156024,
        FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16 = 1000156025,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16 = 1000156026,
        FORMAT_G16B16G16R16_422_UNORM = 1000156027,
        FORMAT_B16G16R16G16_422_UNORM = 1000156028,
        FORMAT_G16_B16_R16_3PLANE_420_UNORM = 1000156029,
        FORMAT_G16_B16R16_2PLANE_420_UNORM = 1000156030,
        FORMAT_G16_B16_R16_3PLANE_422_UNORM = 1000156031,
        FORMAT_G16_B16R16_2PLANE_422_UNORM = 1000156032,
        FORMAT_G16_B16_R16_3PLANE_444_UNORM = 1000156033,
        FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG = 1000054000,
        FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG = 1000054001,
        FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG = 1000054002,
        FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG = 1000054003,
        FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG = 1000054004,
        FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG = 1000054005,
        FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG = 1000054006,
        FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG = 1000054007,
        FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT = 1000066000,
        FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT = 1000066001,
        FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT = 1000066002,
        FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT = 1000066003,
        FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT = 1000066004,
        FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT = 1000066005,
        FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT = 1000066006,
        FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT = 1000066007,
        FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT = 1000066008,
        FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT = 1000066009,
        FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT = 1000066010,
        FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT = 1000066011,
        FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT = 1000066012,
        FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT = 1000066013,
        FORMAT_G8B8G8R8_422_UNORM_KHR = FORMAT_G8B8G8R8_422_UNORM,
        FORMAT_B8G8R8G8_422_UNORM_KHR = FORMAT_B8G8R8G8_422_UNORM,
        FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR = FORMAT_G8_B8_R8_3PLANE_420_UNORM,
        FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR = FORMAT_G8_B8R8_2PLANE_420_UNORM,
        FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR = FORMAT_G8_B8_R8_3PLANE_422_UNORM,
        FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR = FORMAT_G8_B8R8_2PLANE_422_UNORM,
        FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR = FORMAT_G8_B8_R8_3PLANE_444_UNORM,
        FORMAT_R10X6_UNORM_PACK16_KHR = FORMAT_R10X6_UNORM_PACK16,
        FORMAT_R10X6G10X6_UNORM_2PACK16_KHR = FORMAT_R10X6G10X6_UNORM_2PACK16,
        FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR = FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16,
        FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR = FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16,
        FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR = FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR = FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16,
        FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR = FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR = FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16,
        FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR = FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16,
        FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR = FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16,
        FORMAT_R12X4_UNORM_PACK16_KHR = FORMAT_R12X4_UNORM_PACK16,
        FORMAT_R12X4G12X4_UNORM_2PACK16_KHR = FORMAT_R12X4G12X4_UNORM_2PACK16,
        FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR = FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16,
        FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR = FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16,
        FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR = FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR = FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16,
        FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR = FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR = FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16,
        FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR = FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16,
        FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR = FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16,
        FORMAT_G16B16G16R16_422_UNORM_KHR = FORMAT_G16B16G16R16_422_UNORM,
        FORMAT_B16G16R16G16_422_UNORM_KHR = FORMAT_B16G16R16G16_422_UNORM,
        FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR = FORMAT_G16_B16_R16_3PLANE_420_UNORM,
        FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR = FORMAT_G16_B16R16_2PLANE_420_UNORM,
        FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR = FORMAT_G16_B16_R16_3PLANE_422_UNORM,
        FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR = FORMAT_G16_B16R16_2PLANE_422_UNORM,
        FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR = FORMAT_G16_B16_R16_3PLANE_444_UNORM,
    };

} // namespace mango::vulkan
