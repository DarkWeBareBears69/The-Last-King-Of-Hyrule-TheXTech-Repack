#include <stdint.h>
#include <stdio.h>
#include <string.h>


static unsigned char g_Font2_1_gif[] =
{
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0xdf, 0x03, 0x11, 0x00, 0x80, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x21, 0xfe, 0x11, 0x43, 0x72,
    0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47,
    0x49, 0x4d, 0x50, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x03, 0x11,
    0x00, 0x00, 0x02, 0x9e, 0x84, 0x8f, 0xa9, 0xcb, 0xed, 0x0f, 0xa3, 0x9c,
    0xb4, 0xda, 0x8b, 0xb3, 0xde, 0xbc, 0xfb, 0x0f, 0x86, 0xe2, 0x48, 0x96,
    0xe6, 0x89, 0xa6, 0xea, 0xca, 0xb6, 0xee, 0x0b, 0xc7, 0xf2, 0x4c, 0xd7,
    0xf6, 0x8d, 0xe7, 0xfa, 0xce, 0xf7, 0xfe, 0x0f, 0x0c, 0x0a, 0x87, 0xc4,
    0xa2, 0xf1, 0x88, 0x4c, 0x2a, 0x97, 0xcc, 0xa6, 0xf3, 0x09, 0x8d, 0x4a,
    0xa7, 0xd4, 0xaa, 0xf5, 0x8a, 0xcd, 0x6a, 0xb7, 0xdc, 0xae, 0xf7, 0x0b,
    0x0e, 0x8b, 0xc7, 0xe4, 0xb2, 0xf9, 0x8c, 0x4e, 0xab, 0xd7, 0xec, 0xb6,
    0xfb, 0x0d, 0x8f, 0xcb, 0xe7, 0xf4, 0xba, 0xfd, 0x8e, 0xcf, 0xeb, 0xf7,
    0xfc, 0xbe, 0xff, 0x0f, 0x18, 0x28, 0x38, 0x48, 0x58, 0x68, 0x78, 0x88,
    0x98, 0xa8, 0xb8, 0xc8, 0xd8, 0xe8, 0xf8, 0x08, 0x19, 0x29, 0x39, 0x49,
    0x59, 0x69, 0x79, 0x89, 0x99, 0xa9, 0xb9, 0xc9, 0xd9, 0xe9, 0xf9, 0x09,
    0x1a, 0x2a, 0x3a, 0x4a, 0x5a, 0x6a, 0x7a, 0x8a, 0x9a, 0xaa, 0xba, 0xca,
    0xda, 0xea, 0xfa, 0x0a, 0x1b, 0x2b, 0x3b, 0x4b, 0x5b, 0x6b, 0x7b, 0x8b,
    0x9b, 0xab, 0xbb, 0xfb, 0x50, 0x00, 0x00, 0x3b,
    0x00
};

static unsigned char g_Font2_3m_gif[] =
{
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0x11, 0x00, 0xe3, 0x05, 0xa1, 0x02,
    0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x21, 0xfe, 0x11, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20,
    0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x00, 0x2c, 0x00,
    0x00, 0x00, 0x00, 0x11, 0x00, 0xe3, 0x05, 0x00, 0x02, 0xfe, 0x94, 0x8f,
    0xa9, 0xcb, 0x08, 0xff, 0xda, 0x81, 0x51, 0x0a, 0x0a, 0xec, 0xa5, 0x1a,
    0x77, 0x6e, 0x79, 0x21, 0xa8, 0x95, 0x66, 0x22, 0x4a, 0xe9, 0xc9, 0xb6,
    0x6e, 0x03, 0x4d, 0x95, 0x12, 0x1b, 0x35, 0x3d, 0xdf, 0x68, 0x3e, 0xef,
    0x99, 0xdd, 0x73, 0xf0, 0x7e, 0xaf, 0xa2, 0xf1, 0x88, 0x4c, 0x2a, 0x8f,
    0x37, 0x9d, 0x90, 0xe8, 0xdc, 0x60, 0xa6, 0xcf, 0x29, 0x49, 0x06, 0x0d,
    0x62, 0xb7, 0x3e, 0xab, 0xce, 0xbb, 0x02, 0x66, 0x89, 0x3e, 0xee, 0xf2,
    0x8c, 0x3e, 0x5b, 0x55, 0xd4, 0x85, 0x27, 0x2c, 0x8d, 0xc0, 0xc5, 0x9c,
    0xd5, 0x5a, 0xf4, 0x6e, 0xd3, 0x33, 0xeb, 0x38, 0xd9, 0xbf, 0xd7, 0x45,
    0x06, 0x06, 0xe8, 0x57, 0x77, 0x95, 0x86, 0x15, 0xf4, 0x85, 0xc8, 0xd8,
    0x74, 0x95, 0x32, 0xa7, 0xf8, 0xe7, 0x86, 0x28, 0xf8, 0x11, 0x55, 0x45,
    0x89, 0x93, 0x39, 0xe9, 0xf9, 0x59, 0x18, 0x86, 0xd7, 0x68, 0x99, 0x68,
    0x5a, 0x29, 0xb9, 0xa7, 0x15, 0x08, 0x97, 0xd7, 0x79, 0x07, 0x49, 0x35,
    0x1a, 0xd3, 0xc7, 0xda, 0x26, 0x0a, 0x82, 0xeb, 0x28, 0x9b, 0xeb, 0x55,
    0x78, 0x0a, 0x0c, 0x53, 0x7a, 0x39, 0xd2, 0xa9, 0xc9, 0x66, 0x0c, 0x1a,
    0xbc, 0xcc, 0xdc, 0xec, 0xfc, 0x2b, 0x9c, 0x9c, 0xaa, 0xcc, 0x30, 0x1d,
    0x58, 0xbc, 0x4a, 0x8c, 0x9c, 0x7d, 0x5c, 0x62, 0x0d, 0xfd, 0xbc, 0xfc,
    0xfd, 0x7d, 0xbd, 0xbd, 0xa9, 0x1d, 0xcd, 0x4d, 0x8d, 0xaa, 0x5e, 0x9e,
    0x7e, 0xee, 0x5e, 0x3d, 0x1c, 0x8e, 0xe6, 0xaa, 0x65, 0x4f, 0x09, 0x76,
    0xaf, 0x2f, 0x3f, 0x5d, 0x2b, 0xa8, 0x67, 0x52, 0x40, 0x5b, 0x51, 0xf0,
    0xd1, 0x3b, 0x98, 0x66, 0xdc, 0xbc, 0x75, 0x9c, 0xb2, 0xe9, 0xdb, 0x45,
    0x88, 0x1d, 0x3c, 0x86, 0xe8, 0xfa, 0xb5, 0x43, 0x88, 0x31, 0xa3, 0xc6,
    0xfe, 0x84, 0x0b, 0xe3, 0x49, 0xc4, 0xa4, 0x4e, 0x61, 0xb2, 0x8d, 0x24,
    0x9f, 0x3d, 0xec, 0x71, 0x72, 0x62, 0xc9, 0x95, 0x2c, 0x5b, 0xba, 0x2c,
    0x29, 0xf2, 0x62, 0x4c, 0x95, 0x2f, 0x5b, 0xcc, 0x34, 0x07, 0x72, 0xe2,
    0xcd, 0x77, 0x39, 0x31, 0x99, 0x18, 0x59, 0xb3, 0x65, 0xc4, 0x86, 0xad,
    0x48, 0xd8, 0x31, 0x1a, 0x8b, 0x56, 0x40, 0x7c, 0x28, 0x79, 0x41, 0x94,
    0x93, 0x74, 0x48, 0xd3, 0x47, 0x05, 0x7d, 0x49, 0xec, 0x18, 0x14, 0x1b,
    0x4d, 0x7f, 0x03, 0x01, 0x6e, 0xc5, 0xba, 0x13, 0xa7, 0xd6, 0x9e, 0xef,
    0x86, 0x0d, 0xcd, 0xca, 0xe2, 0xac, 0x26, 0x4b, 0x91, 0xa2, 0x8e, 0x91,
    0x09, 0x96, 0xad, 0x55, 0xa2, 0x72, 0x81, 0xce, 0x9c, 0x6b, 0xe8, 0x1f,
    0xda, 0x9c, 0x66, 0xf1, 0x96, 0x3b, 0x4a, 0x35, 0x64, 0x5c, 0xa0, 0x1e,
    0x89, 0x76, 0x83, 0xd6, 0xb6, 0xaa, 0x5e, 0x81, 0x84, 0xf7, 0x16, 0xae,
    0xf8, 0xb1, 0xa8, 0x52, 0xc5, 0x50, 0x29, 0xf3, 0xa9, 0xcb, 0x8f, 0x71,
    0xd7, 0xc3, 0x3c, 0xc7, 0x7a, 0x76, 0xcc, 0xf7, 0x5f, 0xca, 0x27, 0x3f,
    0x2f, 0xaa, 0x92, 0xec, 0xb7, 0xb3, 0xd8, 0xbf, 0x6e, 0xd7, 0xa9, 0xd5,
    0x4c, 0x13, 0x34, 0x6c, 0x8b, 0xa8, 0xbf, 0xda, 0xcd, 0xbc, 0xb6, 0xb6,
    0xb2, 0xc4, 0x53, 0xa5, 0x0e, 0x42, 0x6a, 0xb9, 0xef, 0x62, 0xd9, 0x74,
    0x45, 0x9f, 0x5c, 0xad, 0x3a, 0x39, 0x6d, 0xe4, 0xcb, 0x3f, 0x2b, 0xff,
    0xe8, 0x9c, 0xb8, 0x56, 0xe1, 0x5d, 0x79, 0xff, 0x0e, 0x9c, 0x2f, 0xf5,
    0xe9, 0x7d, 0xd8, 0x0f, 0x03, 0xf6, 0xed, 0x1d, 0xb3, 0xa4, 0xd7, 0xd2,
    0x8b, 0x3b, 0x4c, 0x6d, 0x3d, 0x3c, 0xc4, 0xdd, 0xc0, 0xb9, 0xa3, 0xc7,
    0xfd, 0xdc, 0xb0, 0xd7, 0xf3, 0xc3, 0xcb, 0xcb, 0x67, 0x0e, 0x1d, 0x7f,
    0xb8, 0xb0, 0xf1, 0xfe, 0x21, 0xdb, 0x3f, 0xc8, 0x5f, 0x73, 0xfa, 0x99,
    0x34, 0x18, 0x5c, 0xb7, 0x1d, 0x58, 0x5a, 0x6c, 0xff, 0x71, 0x26, 0x60,
    0x7e, 0xfd, 0x3d, 0xc6, 0xe0, 0x83, 0x14, 0xdd, 0x27, 0xe1, 0x82, 0xa7,
    0x3c, 0x64, 0x5e, 0x70, 0xb5, 0x6d, 0x06, 0x0c, 0x86, 0xf3, 0x69, 0x28,
    0x1e, 0x87, 0x16, 0x9a, 0x12, 0x60, 0x85, 0xe0, 0x98, 0xc8, 0xd5, 0x81,
    0x82, 0xa9, 0xa8, 0xe0, 0x88, 0x89, 0x90, 0x97, 0x97, 0x7b, 0x6f, 0x5d,
    0x07, 0x5e, 0x74, 0x0e, 0xe6, 0x66, 0x8e, 0x69, 0x24, 0x16, 0xd8, 0x22,
    0x71, 0x30, 0xbe, 0x96, 0x1e, 0x28, 0xdf, 0x5d, 0x36, 0x64, 0x5e, 0xc7,
    0xe8, 0xa6, 0x9b, 0x8d, 0xb4, 0x55, 0x07, 0xdf, 0x88, 0x3f, 0xbe, 0xd7,
    0x9d, 0x90, 0xad, 0xb9, 0x13, 0xe4, 0x76, 0x43, 0xe2, 0x55, 0xe5, 0x2f,
    0x45, 0x52, 0xd9, 0x5e, 0x8f, 0x41, 0x79, 0x98, 0x9b, 0x78, 0xec, 0x45,
    0x69, 0xa5, 0x8c, 0x4c, 0x92, 0xa9, 0xe5, 0x94, 0x88, 0x75, 0x19, 0x26,
    0x88, 0x8d, 0xc9, 0xf6, 0xe4, 0x62, 0x59, 0xce, 0xc9, 0x23, 0x59, 0x03,
    0xaa, 0xd7, 0xdb, 0x8c, 0x19, 0x2e, 0xf9, 0xe6, 0x5e, 0x60, 0xc2, 0x26,
    0xe3, 0x98, 0x35, 0xb2, 0xb6, 0x1e, 0x97, 0x68, 0xd2, 0x79, 0x28, 0x9b,
    0x80, 0x66, 0x07, 0xa3, 0x7d, 0xa3, 0x2d, 0x9a, 0xa7, 0x9d, 0x65, 0xbd,
    0xa2, 0xdd, 0x89, 0x14, 0x36, 0x88, 0xe9, 0x55, 0xc6, 0xfd, 0xb9, 0xe0,
    0xa3, 0x65, 0x16, 0x7a, 0xe7, 0x6c, 0x9a, 0xd2, 0x67, 0x60, 0xa9, 0xb6,
    0x99, 0x2a, 0xa9, 0x8b, 0xa3, 0x9e, 0x03, 0xa4, 0xa2, 0x84, 0x46, 0xaa,
    0xe4, 0x25, 0x9b, 0x56, 0xa6, 0xe6, 0x96, 0x27, 0xc6, 0x29, 0x62, 0x79,
    0x88, 0x0e, 0x9a, 0x26, 0xa8, 0x57, 0xce, 0x7a, 0xd6, 0xae, 0x7a, 0x4a,
    0xe9, 0x6b, 0xad, 0xc6, 0xf6, 0x89, 0xfe, 0x16, 0xae, 0x29, 0xa2, 0x1a,
    0x6b, 0x84, 0x97, 0xde, 0x08, 0xed, 0xb3, 0x6d, 0xf2, 0xa9, 0x23, 0x9c,
    0x4d, 0xc6, 0x28, 0x4d, 0x9d, 0xcd, 0x4e, 0xc8, 0xad, 0x47, 0x06, 0xc9,
    0x4a, 0x5d, 0xb6, 0xe4, 0xf8, 0xe8, 0x6a, 0xaf, 0x91, 0x22, 0x19, 0x22,
    0xa5, 0xf5, 0x29, 0x1b, 0xee, 0xad, 0x87, 0x58, 0x26, 0xe8, 0xb0, 0x4e,
    0x6a, 0x1b, 0x2a, 0x84, 0xdd, 0x5a, 0xea, 0x5f, 0xbe, 0xce, 0xea, 0xbb,
    0x68, 0x86, 0xd5, 0xfa, 0x49, 0x4a, 0x0d, 0xba, 0x54, 0x00, 0xcb, 0x2c,
    0xef, 0xf6, 0xf2, 0x68, 0x4a, 0x04, 0xbf, 0x1b, 0x0a, 0xc3, 0x06, 0xff,
    0xf1, 0x30, 0x31, 0x03, 0xff, 0x30, 0xf1, 0xbc, 0x89, 0x5e, 0x7c, 0x30,
    0x8d, 0x93, 0xe5, 0x89, 0xe5, 0x71, 0x90, 0x6a, 0xdc, 0xf1, 0xc6, 0xeb,
    0x01, 0x1b, 0xef, 0xbd, 0xd6, 0xae, 0x0b, 0x25, 0xaf, 0xc2, 0x96, 0x6c,
    0xa8, 0xca, 0xe5, 0xae, 0xec, 0x6d, 0xa5, 0x8d, 0xea, 0x7a, 0x2d, 0xa7,
    0xe6, 0x6a, 0xcc, 0xf2, 0x9a, 0x18, 0xcb, 0x59, 0x33, 0xbd, 0x28, 0x62,
    0x65, 0x31, 0x87, 0xad, 0xee, 0x9c, 0xb3, 0xad, 0x46, 0x1f, 0x7b, 0xae,
    0x98, 0xe3, 0x39, 0x55, 0x9c, 0x14, 0xaa, 0xda, 0x0c, 0xf5, 0xcb, 0x52,
    0x13, 0xdd, 0x32, 0xcf, 0x43, 0xbb, 0x4c, 0xb5, 0xce, 0xbc, 0x06, 0xbd,
    0xb4, 0xd5, 0x8b, 0xc0, 0x6a, 0x86, 0xa8, 0x7b, 0x7a, 0xe3, 0x33, 0xcc,
    0xee, 0xa2, 0x5c, 0x9f, 0xa3, 0x1e, 0x7f, 0x4a, 0xea, 0xa9, 0x6e, 0xa7,
    0x1a, 0x2d, 0xbf, 0xf6, 0xce, 0x8d, 0xef, 0xbe, 0x9d, 0x4e, 0x8d, 0x75,
    0xde, 0xf2, 0xde, 0x8c, 0x27, 0xce, 0x55, 0x17, 0x8d, 0x34, 0xa3, 0x42,
    0x57, 0xaa, 0x76, 0xd6, 0x47, 0x17, 0x8b, 0x38, 0xd8, 0x87, 0x2b, 0x9e,
    0x6e, 0xdb, 0x0b, 0x95, 0xc8, 0xb5, 0xc4, 0x01, 0x2f, 0xfe, 0xec, 0x44,
    0xc4, 0xdd, 0xb8, 0xd2, 0xf0, 0x64, 0x99, 0x7b, 0xac, 0x30, 0xc5, 0x4e,
    0x21, 0x9c, 0x31, 0xe5, 0x5f, 0x0b, 0x3c, 0xb9, 0x97, 0x2e, 0x99, 0xbd,
    0xa1, 0xba, 0xb9, 0x42, 0x2e, 0xf6, 0x87, 0xf7, 0x2d, 0x7e, 0x1d, 0x2a,
    0xa4, 0x71, 0xf2, 0x34, 0xde, 0x7b, 0xa3, 0xde, 0x38, 0xab, 0x84, 0xd7,
    0x7d, 0x2f, 0xeb, 0x76, 0x9b, 0x4c, 0xee, 0x9f, 0x9e, 0xc6, 0xfd, 0xbb,
    0xef, 0xbc, 0xdb, 0x6b, 0x3c, 0xdb, 0x20, 0xa7, 0xfd, 0x1f, 0xf3, 0xce,
    0xfb, 0x9c, 0xa9, 0xb4, 0x72, 0x1f, 0x4f, 0xfd, 0x5d, 0x3a, 0xe5, 0x2a,
    0x5d, 0xf2, 0xbd, 0x03, 0x5d, 0x3d, 0xf7, 0xda, 0x8b, 0x91, 0xa0, 0xaa,
    0xfb, 0xad, 0x8e, 0x7d, 0xf7, 0x2c, 0xc2, 0x2d, 0xfd, 0xef, 0x74, 0x2f,
    0x2b, 0x2e, 0xf7, 0x2f, 0x92, 0xdf, 0x35, 0xad, 0x82, 0x13, 0xf9, 0xaf,
    0xf8, 0xf6, 0xdf, 0x8f, 0x7f, 0xfe, 0x46, 0x0c, 0x3f, 0x7c, 0xe4, 0xdb,
    0xae, 0xef, 0x3d, 0xe8, 0xe9, 0x6f, 0x80, 0x42, 0xe9, 0x59, 0xb0, 0x6c,
    0x07, 0xb8, 0xc4, 0xf9, 0x4d, 0x6b, 0x7b, 0x3b, 0x0d, 0x03, 0xe5, 0xc7,
    0x0c, 0xed, 0x49, 0xd0, 0x80, 0x29, 0xbb, 0x1d, 0x02, 0xff, 0x86, 0x41,
    0x06, 0xc6, 0xeb, 0x4c, 0xbb, 0x23, 0x60, 0x11, 0xd8, 0x05, 0xaf, 0x0c,
    0xda, 0xea, 0x67, 0x86, 0xcb, 0x1d, 0xb5, 0x4c, 0xf7, 0xbe, 0xf3, 0xfd,
    0xef, 0x6c, 0x15, 0x5c, 0xca, 0x05, 0x35, 0x28, 0xc2, 0xc0, 0xf5, 0xcd,
    0x5f, 0xf3, 0x2b, 0x9f, 0x07, 0x4f, 0x00, 0xc2, 0x40, 0xc5, 0xf0, 0x29,
    0xa9, 0x13, 0xd3, 0x0a, 0x3f, 0x45, 0x43, 0xfd, 0x3d, 0x2f, 0x7e, 0x6f,
    0x9b, 0x94, 0xe3, 0xda, 0x57, 0xc4, 0x7a, 0x99, 0x8f, 0x59, 0x37, 0xac,
    0x07, 0x05, 0x49, 0xb6, 0x43, 0xc6, 0x29, 0x30, 0x88, 0x1f, 0x62, 0xe2,
    0xfe, 0x73, 0x72, 0x38, 0x3f, 0xf4, 0x4d, 0xcf, 0x7a, 0xb9, 0xd3, 0x21,
    0x0c, 0xbf, 0x08, 0xbb, 0x19, 0x12, 0x4b, 0x8a, 0x64, 0x44, 0x21, 0x12,
    0xbe, 0xd7, 0x21, 0x01, 0xa6, 0x6f, 0x7b, 0x2a, 0x54, 0xe2, 0x04, 0x91,
    0xb5, 0xa3, 0x36, 0x22, 0xe4, 0x8d, 0x56, 0x8c, 0xde, 0x16, 0x05, 0xf8,
    0xad, 0x23, 0x85, 0x6b, 0x45, 0xed, 0x5a, 0x21, 0x1d, 0x2d, 0xb8, 0x33,
    0x0e, 0x7a, 0x8d, 0x88, 0xed, 0x42, 0x57, 0x08, 0xc1, 0xe8, 0x3e, 0x25,
    0xfc, 0x51, 0x8b, 0xea, 0x5b, 0x62, 0x12, 0x49, 0x58, 0x47, 0xe2, 0x79,
    0x25, 0x47, 0x66, 0x6c, 0x22, 0x63, 0x1e, 0x48, 0x3f, 0x9c, 0x89, 0x8c,
    0x20, 0x9b, 0x23, 0x52, 0x27, 0x9d, 0x16, 0xb1, 0x4d, 0x02, 0x42, 0x94,
    0x98, 0x0b, 0x25, 0x04, 0x2d, 0xb9, 0xbf, 0x27, 0x0a, 0x32, 0x81, 0x65,
    0x14, 0xe3, 0xab, 0x16, 0x18, 0xc6, 0x31, 0x56, 0x12, 0x95, 0x56, 0x3a,
    0xe1, 0xeb, 0x64, 0x28, 0x4b, 0x57, 0xf2, 0x2d, 0x97, 0xae, 0x5b, 0x15,
    0x2d, 0x99, 0xa0, 0xca, 0x24, 0x21, 0x72, 0x8a, 0xbc, 0x04, 0x62, 0x15,
    0xb3, 0xe8, 0x47, 0x35, 0xde, 0x2f, 0x6a, 0x07, 0x2c, 0x21, 0x31, 0x5f,
    0x49, 0xc5, 0x36, 0x99, 0x8a, 0x8f, 0x48, 0x64, 0x64, 0xf0, 0x4e, 0xa9,
    0x47, 0x0d, 0x61, 0xf2, 0x8b, 0x90, 0x7c, 0xa4, 0x1d, 0x1b, 0xf9, 0x4b,
    0x9b, 0xc8, 0xac, 0x82, 0xd6, 0x9c, 0x96, 0x2f, 0xc9, 0x26, 0x47, 0x66,
    0x76, 0x90, 0x66, 0x72, 0x8c, 0x66, 0xbf, 0x24, 0x09, 0xc0, 0x76, 0x46,
    0x46, 0x69, 0x7b, 0xbc, 0xde, 0xb8, 0xc2, 0x79, 0xcb, 0x67, 0xee, 0x12,
    0x9a, 0xc5, 0xdc, 0xa7, 0x3f, 0xb3, 0xe4, 0xc0, 0x5f, 0x51, 0x0f, 0x9f,
    0xfd, 0xc4, 0x9d, 0x3e, 0x0d, 0x6a, 0x26, 0xd5, 0xb1, 0xaf, 0x9c, 0x04,
    0xe5, 0x09, 0x29, 0x74, 0x1d, 0x06, 0x3a, 0x4f, 0x9a, 0x32, 0x93, 0x9c,
    0x9c, 0xe8, 0x27, 0x1f, 0xaa, 0xb9, 0x22, 0x91, 0x8c, 0x79, 0x0d, 0x2d,
    0xa8, 0xed, 0x42, 0x16, 0xcc, 0x23, 0x26, 0xd4, 0x85, 0xc2, 0x7b, 0xe1,
    0x3d, 0x1b, 0x8a, 0x50, 0x58, 0xe2, 0x92, 0x9f, 0x2c, 0x7d, 0xa7, 0x34,
    0xbd, 0x09, 0x2d, 0x2c, 0xda, 0x8f, 0x7f, 0x6b, 0x83, 0x27, 0xef, 0x8c,
    0x87, 0xd3, 0x9a, 0xf6, 0x4f, 0x7c, 0x39, 0x95, 0xa7, 0x03, 0x27, 0x95,
    0xa0, 0x48, 0xae, 0x91, 0x6e, 0xf1, 0xac, 0x1f, 0x68, 0x16, 0x99, 0x4c,
    0x9f, 0xde, 0x51, 0xa9, 0x8d, 0x44, 0x63, 0xf6, 0x94, 0x39, 0xd4, 0x81,
    0x1a, 0x09, 0xa8, 0x36, 0x45, 0xea, 0x37, 0x81, 0xd7, 0xd1, 0xab, 0x22,
    0x0f, 0x82, 0x8e, 0x18, 0x25, 0x35, 0x19, 0x9a, 0xd5, 0x96, 0x14, 0x00,
    0x00, 0x3b,
    0x00
};

static unsigned char g_Font2S_gif[] =
{
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0xf0, 0x01, 0x10, 0x00, 0x80, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x2c, 0x00, 0x00, 0x00, 0x00,
    0xf0, 0x01, 0x10, 0x00, 0x00, 0x02, 0x64, 0x84, 0x8f, 0xa9, 0xcb, 0xed,
    0x0f, 0xa3, 0x9c, 0xb4, 0xda, 0x8b, 0xb3, 0xde, 0xbc, 0xfb, 0x0f, 0x86,
    0xe2, 0x48, 0x96, 0xe6, 0x89, 0xa6, 0xea, 0xca, 0xb6, 0xee, 0x0b, 0xc7,
    0xf2, 0x4c, 0xd7, 0xf6, 0x8d, 0xe7, 0xfa, 0xce, 0xf7, 0xfe, 0x0f, 0x0c,
    0x0a, 0x87, 0xc4, 0xa2, 0xf1, 0x88, 0x4c, 0x2a, 0x97, 0xcc, 0xa6, 0xf3,
    0x09, 0x8d, 0x4a, 0xa7, 0xd4, 0xaa, 0xf5, 0x8a, 0xcd, 0x6a, 0xb7, 0xdc,
    0xae, 0xf7, 0x0b, 0x0e, 0x8b, 0xc7, 0xe4, 0xb2, 0xf9, 0x8c, 0x4e, 0xab,
    0xd7, 0xec, 0xb6, 0xfb, 0x0d, 0x8f, 0xcb, 0xe7, 0xf4, 0xba, 0xfd, 0x8e,
    0xcf, 0xeb, 0xf7, 0xfc, 0xbe, 0xff, 0x0f, 0x18, 0x18, 0x54, 0x00, 0x00,
    0x3b,
    0x00
};



static unsigned char g_MenuGFX1m_orig_gif[] =
{
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0x20, 0x03, 0x30, 0x00, 0x87, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x21, 0xf9, 0x04, 0x00, 0x00, 0x00, 0xff, 0x00, 0x2c, 0x00, 0x00,
    0x00, 0x00, 0x20, 0x03, 0x30, 0x00, 0x00, 0x08, 0xff, 0x00, 0x01, 0x08,
    0x1c, 0x48, 0xb0, 0xa0, 0xc1, 0x83, 0x08, 0x13, 0x2a, 0x5c, 0xc8, 0xb0,
    0xa1, 0xc3, 0x87, 0x10, 0x23, 0x4a, 0x9c, 0x48, 0xb1, 0xa2, 0xc5, 0x8b,
    0x18, 0x33, 0x6a, 0xdc, 0xc8, 0xb1, 0xa3, 0xc7, 0x8f, 0x20, 0x43, 0x8a,
    0x1c, 0x49, 0xb2, 0xa4, 0xc9, 0x93, 0x28, 0x53, 0xaa, 0x5c, 0xc9, 0xb2,
    0xa5, 0xcb, 0x97, 0x30, 0x63, 0xca, 0x9c, 0x49, 0xb3, 0xa6, 0xcd, 0x9b,
    0x38, 0x73, 0xea, 0xdc, 0xc9, 0xb3, 0xa7, 0xcf, 0x9f, 0x40, 0x83, 0x0a,
    0x1d, 0x4a, 0xb4, 0xa8, 0xd1, 0xa3, 0x48, 0x93, 0x2a, 0x5d, 0xca, 0xb4,
    0xa9, 0xd3, 0xa7, 0x50, 0xa3, 0x4a, 0x9d, 0x4a, 0xb5, 0xaa, 0xd5, 0xab,
    0x58, 0xb3, 0x6a, 0xdd, 0xca, 0xb5, 0xab, 0xd7, 0xaf, 0x60, 0xc3, 0x8a,
    0x1d, 0x4b, 0xb6, 0xac, 0xd9, 0xb3, 0x68, 0xd3, 0xaa, 0x5d, 0xcb, 0xb6,
    0xad, 0xdb, 0xb7, 0x70, 0xe3, 0xca, 0x9d, 0x4b, 0xb7, 0xae, 0xdd, 0xbb,
    0x78, 0xf3, 0xea, 0xdd, 0xcb, 0xb7, 0xaf, 0xdf, 0xbf, 0x80, 0x03, 0x0b,
    0x1e, 0x4c, 0xb8, 0xb0, 0xe1, 0xc3, 0x88, 0x13, 0x2b, 0x5e, 0xcc, 0xb8,
    0xb1, 0xe3, 0xc7, 0x90, 0x23, 0x4b, 0x9e, 0x4c, 0xb9, 0xb2, 0xe5, 0xcb,
    0x98, 0x33, 0x6b, 0xde, 0xcc, 0xb9, 0xb3, 0xe7, 0xcf, 0xa0, 0x43, 0x8b,
    0x1e, 0x4d, 0xba, 0xb4, 0xe9, 0xd3, 0xa8, 0x53, 0xab, 0x5e, 0xcd, 0xba,
    0xb5, 0xeb, 0xd7, 0xb0, 0x63, 0xcb, 0x9e, 0x4d, 0xbb, 0xb6, 0xed, 0xdb,
    0xb8, 0x73, 0xeb, 0xde, 0xcd, 0xbb, 0xb7, 0xef, 0xdf, 0xc0, 0x83, 0x0b,
    0x1f, 0x4e, 0xbc, 0xb8, 0xf1, 0xe3, 0xc8, 0x93, 0x2b, 0x5f, 0xbe, 0x38,
    0x80, 0xf3, 0x00, 0x3c, 0x9f, 0x43, 0xdf, 0x29, 0x3d, 0xfa, 0x73, 0xeb,
    0xce, 0xb1, 0x4f, 0xd7, 0x59, 0x9d, 0xfa, 0x75, 0xef, 0xd9, 0xc1, 0x6f,
    0xff, 0xcf, 0xd9, 0x9d, 0xfb, 0x77, 0xad, 0xe5, 0xc9, 0x9f, 0x57, 0x1f,
    0xde, 0x7c, 0x7b, 0xf6, 0xe3, 0x71, 0xa6, 0x97, 0xbf, 0x9e, 0xfe, 0x7b,
    0xfb, 0xf1, 0x6f, 0xce, 0xd7, 0x5f, 0x9f, 0xff, 0xfd, 0xab, 0xfb, 0xd9,
    0x14, 0x60, 0x4d, 0x03, 0xd2, 0x54, 0xe0, 0x4c, 0x07, 0xca, 0x94, 0x60,
    0x4c, 0x0b, 0xc2, 0xd4, 0xe0, 0x4b, 0x0f, 0xba, 0x14, 0x61, 0x4b, 0x13,
    0xb2, 0x54, 0xe1, 0x52, 0x17, 0xaa, 0x94, 0x61, 0x4a, 0x1b, 0xa2, 0xd4,
    0xe1, 0x49, 0x1f, 0x9a, 0x14, 0x62, 0x49, 0x23, 0x92, 0x54, 0xe2, 0x48,
    0x27, 0x8a, 0x94, 0x62, 0x48, 0x2b, 0x82, 0xd4, 0x62, 0x4f, 0xd2, 0xbd,
    0xa8, 0x51, 0x8c, 0xfd, 0x29, 0x48, 0x63, 0x7e, 0x36, 0xd2, 0x88, 0x9f,
    0x8c, 0x19, 0xdd, 0x88, 0x23, 0x83, 0x37, 0xee, 0x58, 0x23, 0x90, 0x3a,
    0xfa, 0x17, 0xa3, 0x90, 0xff, 0xe5, 0x78, 0x24, 0x80, 0x41, 0x1a, 0xc9,
    0x23, 0x46, 0x3e, 0x22, 0xf9, 0xa3, 0x83, 0x4d, 0x0a, 0x58, 0x25, 0x81,
    0x57, 0x1a, 0x98, 0x25, 0x82, 0x5b, 0x2a, 0xf9, 0xe4, 0x45, 0x51, 0x3a,
    0x39, 0x24, 0x54, 0x61, 0x5a, 0x59, 0xa4, 0x99, 0x4b, 0xa2, 0xf9, 0xa5,
    0x45, 0x65, 0x62, 0x79, 0xa6, 0x9b, 0x69, 0xc2, 0xb9, 0x66, 0x45, 0x6d,
    0x6a, 0xf9, 0xa6, 0x9d, 0x71, 0xe2, 0x39, 0xa7, 0x9e, 0x63, 0x42, 0xd8,
    0x25, 0x91, 0x79, 0x72, 0x79, 0xa7, 0xa0, 0x81, 0x7a, 0xd9, 0xa7, 0x84,
    0x7f, 0x52, 0x39, 0xa8, 0xa1, 0x49, 0x02, 0xba, 0xe7, 0x44, 0x75, 0x12,
    0xfa, 0xa8, 0xa2, 0x3e, 0x4e, 0xb9, 0x52, 0xa5, 0x87, 0x72, 0x88, 0xa9,
    0xa5, 0x1a, 0x6e, 0xca, 0xe7, 0xa2, 0x14, 0x7a, 0x2a, 0x69, 0xa2, 0x97,
    0x8a, 0xca, 0x68, 0xa1, 0xa1, 0x62, 0xfa, 0x29, 0xaa, 0x16, 0x9a, 0x1a,
    0xd5, 0xa6, 0x9c, 0x6a, 0xff, 0xaa, 0xea, 0xa8, 0xa0, 0xb6, 0x3a, 0xeb,
    0xa9, 0x93, 0x36, 0x04, 0xeb, 0xaa, 0xb9, 0x32, 0xb4, 0x2b, 0xad, 0xac,
    0x96, 0x7a, 0xab, 0xa3, 0xa4, 0x76, 0x3a, 0xac, 0x53, 0xb0, 0xf6, 0x7a,
    0x50, 0xb2, 0x99, 0x9a, 0xc8, 0x6c, 0xac, 0xce, 0x32, 0x4b, 0xe9, 0xaf,
    0x88, 0x4a, 0xeb, 0xa7, 0xb5, 0xd5, 0x26, 0x3b, 0xad, 0xab, 0xb6, 0x6a,
    0x7b, 0xad, 0xb7, 0xd9, 0x52, 0xdb, 0xd4, 0xb3, 0xd0, 0xa2, 0xf8, 0xec,
    0xb6, 0xc7, 0x0a, 0x0b, 0x6e, 0xaa, 0xeb, 0x76, 0x2b, 0xae, 0xbb, 0xdc,
    0xaa, 0xfb, 0xae, 0xbc, 0xf1, 0x1a, 0xdb, 0x2e, 0xbd, 0xe9, 0xda, 0x3b,
    0x2f, 0x52, 0xe4, 0x2a, 0x2b, 0x50, 0xbf, 0xcd, 0x7e, 0x04, 0x70, 0xa3,
    0xd1, 0xf6, 0x0b, 0x2f, 0xb6, 0xb2, 0x1a, 0x8c, 0xef, 0xbd, 0x22, 0x0e,
    0x7c, 0x30, 0xc3, 0x24, 0x3a, 0xbc, 0xf0, 0xbe, 0x11, 0x03, 0xcc, 0xd4,
    0xc0, 0xe5, 0x7a, 0x84, 0xf1, 0xc3, 0x14, 0x17, 0x4c, 0x2e, 0xc7, 0xf5,
    0x56, 0xac, 0xb0, 0xbe, 0xe7, 0x4e, 0x1c, 0xb2, 0xc7, 0x25, 0x93, 0x8c,
    0xb0, 0x87, 0x12, 0xab, 0x0c, 0xb1, 0x50, 0x18, 0xe7, 0x1a, 0x73, 0xc0,
    0x33, 0xce, 0x9c, 0x71, 0x8f, 0x36, 0xb3, 0x3c, 0xb3, 0xce, 0x31, 0xf3,
    0xbc, 0x31, 0x88, 0x39, 0x03, 0xbd, 0xb3, 0xd0, 0x3d, 0x13, 0xfd, 0x73,
    0xc3, 0x43, 0x1b, 0x65, 0xf3, 0xcd, 0x50, 0x06, 0x8d, 0x74, 0xd1, 0x4f,
    0x1f, 0x2d, 0xb2, 0xd4, 0x28, 0x5b, 0x6c, 0x74, 0xcb, 0x53, 0x63, 0x5d,
    0xf5, 0xc8, 0x59, 0x5b, 0x1d, 0xb5, 0xd6, 0xe6, 0x26, 0x1d, 0xd4, 0xd2,
    0x91, 0xd6, 0x4c, 0x76, 0xb0, 0x6c, 0x9e, 0x8d, 0x36, 0x9d, 0x6a, 0xf3,
    0xd8, 0xb6, 0xdb, 0x6f, 0x13, 0x0c, 0x66, 0xdc, 0x4c, 0x3f, 0x44, 0x77,
    0xdd, 0x0e, 0xdd, 0xed, 0x22, 0xdd, 0x7b, 0xc7, 0xb7, 0xdd, 0xf7, 0xdb,
    0x2e, 0x0a, 0xcc, 0xb7, 0xe0, 0x7e, 0x13, 0x0e, 0xb8, 0xe1, 0x6d, 0xff,
    0x9d, 0x38, 0xe2, 0x6a, 0x2b, 0xde, 0x38, 0xe3, 0x67, 0x3b, 0x1e, 0x39,
    0xe4, 0x64, 0x4b, 0x5e, 0x39, 0xe5, 0x4b, 0xff, 0xdd, 0xf4, 0xdd, 0xb5,
    0xda, 0xcd, 0x79, 0xe7, 0x79, 0x7f, 0xbe, 0xb6, 0xaf, 0xa2, 0x8f, 0x58,
    0xba, 0xe9, 0xa7, 0xcb, 0x1d, 0x7a, 0xea, 0x9b, 0x9f, 0xde, 0x7a, 0xe9,
    0xaf, 0x8b, 0x1e, 0xfb, 0xe7, 0xb3, 0x73, 0x5e, 0x7b, 0xed, 0x7a, 0xcf,
    0xcd, 0xba, 0xee, 0xae, 0xf3, 0x0e, 0xbb, 0xef, 0xb2, 0x03, 0x4f, 0xbb,
    0xf0, 0xb6, 0x13, 0x9f, 0x7b, 0xda, 0xbb, 0x23, 0xdf, 0xbb, 0xf2, 0xbf,
    0x33, 0x1f, 0xbc, 0xf3, 0x65, 0x17, 0x94, 0xfa, 0xca, 0xcb, 0x4e, 0xdf,
    0xf1, 0x40, 0xd6, 0x5f, 0xff, 0x6f, 0xf6, 0xf9, 0x4a, 0xcf, 0x7d, 0xa5,
    0xa4, 0x7f, 0x5f, 0x2c, 0x00, 0xe2, 0x47, 0x4f, 0x50, 0xf9, 0xe3, 0xa3,
    0x0f, 0x3a, 0xf9, 0xea, 0x2f, 0xd8, 0xbe, 0xfb, 0xef, 0xab, 0xce, 0xbe,
    0xd7, 0x09, 0xc5, 0x2f, 0xbf, 0xfd, 0xb1, 0xe2, 0x1f, 0xfe, 0xfb, 0xfb,
    0xb7, 0xdf, 0xbf, 0xfa, 0xff, 0x43, 0x5f, 0x00, 0xcb, 0x37, 0x40, 0xf1,
    0x15, 0xf0, 0x7b, 0x07, 0xe4, 0x5e, 0x02, 0xb3, 0x97, 0xc0, 0x80, 0x00,
    0x00, 0x3b,
    0x00
};

static unsigned char g_MenuGFX1m_fixed_gif[] =
{
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0x20, 0x03, 0x3c, 0x00, 0x80, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x21, 0xfe, 0x11, 0x43, 0x72,
    0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47,
    0x49, 0x4d, 0x50, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x20, 0x03, 0x3c,
    0x00, 0x00, 0x02, 0xfe, 0x84, 0x8f, 0xa9, 0xcb, 0xed, 0x0f, 0xa3, 0x9c,
    0xb4, 0xda, 0x8b, 0xb3, 0xde, 0xbc, 0xfb, 0x0f, 0x86, 0xe2, 0x48, 0x96,
    0xe6, 0x89, 0xa6, 0xea, 0xca, 0xb6, 0xee, 0x0b, 0xc7, 0xf2, 0x4c, 0xd7,
    0xf6, 0x8d, 0xe7, 0xfa, 0xce, 0xf7, 0xfe, 0x0f, 0x0c, 0x0a, 0x87, 0xc4,
    0xa2, 0xf1, 0x88, 0x4c, 0x2a, 0x97, 0xcc, 0xa6, 0xf3, 0x09, 0x8d, 0x4a,
    0xa7, 0xd4, 0xaa, 0xf5, 0x8a, 0xcd, 0x6a, 0xb7, 0xdc, 0xae, 0xf7, 0x0b,
    0x0e, 0x8b, 0xc7, 0xe4, 0xb2, 0xf9, 0x8c, 0x4e, 0xab, 0xd7, 0xec, 0xb6,
    0xfb, 0x0d, 0x8f, 0xcb, 0xe7, 0xf4, 0xba, 0xfd, 0x8e, 0xcf, 0xeb, 0xf7,
    0xfc, 0xbe, 0xff, 0x0f, 0x18, 0x28, 0x38, 0x48, 0x58, 0x68, 0x78, 0x88,
    0x98, 0xa8, 0xb8, 0xc8, 0xd8, 0xe8, 0xf8, 0x08, 0x19, 0x29, 0x39, 0x49,
    0x59, 0x69, 0x79, 0x89, 0x99, 0xa9, 0xb9, 0xc9, 0xd9, 0xe9, 0xf9, 0x09,
    0x1a, 0x2a, 0x3a, 0x4a, 0x5a, 0x6a, 0x7a, 0x8a, 0x9a, 0xaa, 0xba, 0xca,
    0xda, 0xea, 0xfa, 0x0a, 0x1b, 0x2b, 0x3b, 0x4b, 0x5b, 0x6b, 0x7b, 0x8b,
    0x9b, 0xab, 0xbb, 0xcb, 0xdb, 0xeb, 0xfb, 0x0b, 0x1c, 0x2c, 0x3c, 0x4c,
    0x5c, 0x6c, 0x7c, 0x8c, 0x9c, 0xac, 0xbc, 0xcc, 0xdc, 0xec, 0xfc, 0xfc,
    0x18, 0x20, 0x1d, 0x00, 0x34, 0x4d, 0xfd, 0x63, 0x5d, 0x3d, 0xad, 0x2d,
    0xcd, 0x7d, 0xed, 0x93, 0x8d, 0xbd, 0x2d, 0xde, 0x4d, 0xfe, 0xdd, 0x13,
    0x0e, 0x3e, 0xee, 0x95, 0x8e, 0xbe, 0xee, 0x5e, 0xae, 0x1e, 0x0f, 0x7f,
    0xce, 0xd3, 0x6e, 0xff, 0x8e, 0x3f, 0xaf, 0x5f, 0xbf, 0x73, 0xef, 0x9f,
    0x0f, 0xe0, 0xbe, 0x2d, 0xff, 0x74, 0x14, 0xcc, 0x71, 0x10, 0x47, 0xc2,
    0x1b, 0x0b, 0x6d, 0x34, 0xac, 0xf1, 0x90, 0x46, 0xc4, 0x19, 0x13, 0x65,
    0x54, 0x8c, 0x71, 0x11, 0x46, 0xc6, 0xfe, 0x27, 0x1b, 0x5d, 0x74, 0x6c,
    0xf1, 0x91, 0x45, 0xc8, 0x15, 0x23, 0x55, 0x94, 0x4c, 0x71, 0x12, 0x45,
    0xca, 0x13, 0x2b, 0x4d, 0xb4, 0x2c, 0xf1, 0x92, 0x44, 0xcc, 0x20, 0xd6,
    0x66, 0x7a, 0xa8, 0x19, 0xd0, 0x21, 0xce, 0x7e, 0x3a, 0x71, 0xf2, 0xb3,
    0xd9, 0x61, 0x27, 0x4f, 0x88, 0x3b, 0x7f, 0xe6, 0x24, 0xea, 0x53, 0x60,
    0x4d, 0xa3, 0x03, 0x7b, 0x2e, 0x25, 0x58, 0x54, 0x29, 0x50, 0x0e, 0x42,
    0x99, 0x0e, 0x95, 0x18, 0xd5, 0x60, 0x56, 0x84, 0x5b, 0x15, 0x76, 0x65,
    0xf8, 0xd5, 0xe9, 0xd4, 0x0d, 0x55, 0xa5, 0x1e, 0xa5, 0x52, 0x56, 0x6b,
    0x52, 0xb5, 0x4f, 0xd9, 0x8e, 0xd5, 0x90, 0x96, 0xeb, 0x5a, 0xb9, 0x6d,
    0xe9, 0xbe, 0xcd, 0x10, 0xd7, 0xeb, 0x5c, 0xbd, 0x75, 0xf9, 0xde, 0xf5,
    0x7b, 0x96, 0x62, 0x58, 0xa4, 0x7d, 0xc1, 0xee, 0x35, 0x5c, 0x58, 0x6c,
    0x60, 0x8b, 0x83, 0xb1, 0x1e, 0x56, 0xdc, 0x94, 0xf0, 0xdf, 0x0b, 0x79,
    0x11, 0x4f, 0x76, 0x2c, 0xf4, 0xea, 0x8b, 0xcc, 0x8b, 0x41, 0x72, 0xd6,
    0xec, 0xf1, 0x33, 0xe0, 0xc7, 0x18, 0x45, 0x5b, 0x6e, 0xbc, 0xd9, 0x34,
    0xe4, 0xc4, 0xa5, 0x39, 0x8f, 0x66, 0xad, 0x51, 0x75, 0x95, 0xcf, 0xa0,
    0x3d, 0xbb, 0x3e, 0x4d, 0x3a, 0xf6, 0xed, 0xd5, 0x97, 0x23, 0xd0, 0x7e,
    0xdd, 0x1b, 0xc2, 0x6f, 0xdc, 0xb0, 0x53, 0xef, 0x96, 0x8c, 0x3a, 0xf4,
    0x71, 0x29, 0xb4, 0x83, 0x2f, 0x68, 0xde, 0x59, 0x25, 0xf4, 0xda, 0xd2,
    0xa1, 0x63, 0x1e, 0xce, 0xd8, 0xba, 0x60, 0xed, 0xd9, 0x9b, 0x5f, 0x97,
    0xad, 0xdb, 0xfb, 0x76, 0xf1, 0xdd, 0xb1, 0x47, 0x99, 0x4e, 0x9d, 0xe5,
    0xf4, 0xef, 0xcb, 0x8d, 0x93, 0x6f, 0xfd, 0x3e, 0xbc, 0x79, 0xf9, 0xe0,
    0xdd, 0xcf, 0xb7, 0x5f, 0x5f, 0x79, 0x7c, 0xfc, 0xed, 0xfe, 0xf5, 0xdf,
    0x67, 0x82, 0x9e, 0x73, 0x06, 0x04, 0x18, 0xdd, 0x08, 0x04, 0x46, 0x56,
    0x5d, 0x80, 0xf4, 0x71, 0x67, 0x9b, 0x82, 0xfc, 0xed, 0x67, 0xd2, 0x81,
    0x0b, 0x42, 0x88, 0x92, 0x84, 0x0f, 0xfe, 0x57, 0x21, 0x81, 0x50, 0x1c,
    0x98, 0x9e, 0x08, 0x1c, 0x4e, 0x88, 0x61, 0x82, 0xe8, 0x81, 0x98, 0x5f,
    0x86, 0x0e, 0xfa, 0xb7, 0xde, 0x85, 0x25, 0x8a, 0x98, 0x22, 0x8a, 0x0c,
    0x8a, 0x64, 0xa1, 0x8b, 0x14, 0x1a, 0xc1, 0x61, 0x6f, 0x35, 0x16, 0x78,
    0xd3, 0x8d, 0x1d, 0x06, 0xa5, 0x23, 0x8c, 0x37, 0xfa, 0x58, 0x23, 0x90,
    0x1f, 0x92, 0xd4, 0x23, 0x91, 0x3f, 0x1a, 0x19, 0x24, 0x92, 0x43, 0x46,
    0x78, 0xa4, 0x12, 0x3a, 0xee, 0x48, 0x55, 0x91, 0x4c, 0x26, 0x39, 0xe5,
    0x92, 0x26, 0x5a, 0xc9, 0xa2, 0x86, 0x4a, 0xc6, 0x78, 0x25, 0x97, 0x59,
    0x9e, 0xd8, 0xa5, 0x96, 0x55, 0x7a, 0xa9, 0x5e, 0x93, 0x45, 0x3c, 0x59,
    0x59, 0x8e, 0x68, 0x16, 0x07, 0xd7, 0x9a, 0x6c, 0xe2, 0xe5, 0x26, 0x50,
    0x71, 0xca, 0x39, 0x27, 0x82, 0x64, 0xd5, 0x09, 0xe5, 0x04, 0x78, 0xe6,
    0x29, 0xc1, 0x9e, 0x32, 0xe1, 0xf9, 0x67, 0x9d, 0x81, 0xce, 0x29, 0x93,
    0x81, 0x80, 0x1a, 0x2a, 0x28, 0xa2, 0x84, 0x2a, 0x1a, 0xe7, 0xa0, 0x8d,
    0x32, 0xea, 0xa6, 0xa3, 0x91, 0x42, 0xba, 0xa6, 0xa4, 0x95, 0x52, 0x8a,
    0xa6, 0xa5, 0x99, 0x62, 0xfa, 0xe4, 0xa0, 0x51, 0xee, 0x99, 0x9b, 0x9e,
    0xa0, 0x86, 0xda, 0xe7, 0xa8, 0x6f, 0x0a, 0x67, 0xea, 0x49, 0xa9, 0xaa,
    0xba, 0xaa, 0x9d, 0xa5, 0xb6, 0xfa, 0xe9, 0xaa, 0xb1, 0xa6, 0x3a, 0xab,
    0xa9, 0xb5, 0x8e, 0x7a, 0x2b, 0xa8, 0xb9, 0xe6, 0xea, 0xe7, 0x9d, 0xb0,
    0xfa, 0x2a, 0x2b, 0xb0, 0xb4, 0x0a, 0x6b, 0x2b, 0xb1, 0xb8, 0x1a, 0xab,
    0xd6, 0x2b, 0xb2, 0xbd, 0xb6, 0xf9, 0x2b, 0xb3, 0xc1, 0x3a, 0x3b, 0x2c,
    0xb4, 0xc5, 0x4a, 0x9b, 0x66, 0x02, 0xad, 0xbe, 0xf8, 0xdc, 0xb5, 0x21,
    0x1e, 0xa0, 0xed, 0xb6, 0x03, 0x76, 0xdb, 0x9f, 0xb5, 0xe0, 0x66, 0x86,
    0xea, 0xb8, 0xc9, 0x01, 0x60, 0x6e, 0xb5, 0x08, 0xa4, 0x7b, 0x2e, 0xbb,
    0xa4, 0xa2, 0xeb, 0xee, 0x43, 0xf1, 0xca, 0x3b, 0xaf, 0xab, 0xf0, 0x8a,
    0xd9, 0x40, 0xbd, 0xf6, 0xea, 0x5b, 0x1b, 0xbf, 0xe5, 0xce, 0xfb, 0x6f,
    0xbc, 0x01, 0xbb, 0x3b, 0x30, 0xbb, 0x05, 0xa7, 0x7b, 0xb0, 0xb9, 0x09,
    0x8f, 0xbb, 0x30, 0xb8, 0x0d, 0x77, 0xfb, 0x30, 0xbf, 0x12, 0x4f, 0x4c,
    0x71, 0xc5, 0x16, 0x5f, 0x8c, 0x71, 0xc6, 0x1a, 0x6f, 0xcc, 0x71, 0xc7,
    0x1e, 0x7f, 0x0c, 0x72, 0xc8, 0x22, 0x8f, 0x4c, 0x72, 0xc9, 0x26, 0x9f,
    0x8c, 0x72, 0xca, 0x2a, 0xaf, 0xcc, 0x72, 0xcb, 0x2e, 0xbf, 0x0c, 0x73,
    0xcc, 0x32, 0xcf, 0x4c, 0x73, 0xcd, 0x36, 0xdf, 0x8c, 0x73, 0xce, 0x3a,
    0xef, 0xcc, 0x73, 0xcf, 0x3e, 0xff, 0x0c, 0x74, 0xd0, 0x42, 0x0f, 0x4d,
    0x74, 0xd1, 0x46, 0x1f, 0x8d, 0x74, 0xd2, 0x4a, 0x2f, 0xcd, 0x74, 0xd3,
    0x4e, 0x3f, 0x0d, 0x75, 0xd4, 0x52, 0x4f, 0x4d, 0x75, 0xd5, 0x56, 0x5f,
    0x8d, 0x75, 0xd6, 0x5a, 0x6f, 0xcd, 0x75, 0xd7, 0x5e, 0x7f, 0x0d, 0x76,
    0xd8, 0x62, 0x8f, 0x4d, 0x76, 0xd9, 0x66, 0x9f, 0x8d, 0x76, 0xda, 0x6a,
    0xaf, 0xcd, 0x76, 0xdb, 0x6e, 0xbf, 0x0d, 0xb7, 0xbb, 0x05, 0x00, 0x00,
    0x3b,
    0x00
};



struct Exe2UI
{
    off_t offset;
    size_t size;
    const char* filename;
};

static struct Exe2UI s_exe2ui[] =
{
    {207393, 10862, "EditorSplash.gif"},
    {827416, 35359, "MenuGFX4.gif"},
    {888848, 1032, "Coin.gif"},
    {889931, 1126, "Loader.gif"},
    {2997483, 898, "BMVsm.gif"},
    {2998435, 940, "BMVs.gif"},
    {2999434, 1001, "BMWinm.gif"},
    {3000490, 1156, "BMWin.gif"},
    {3001718, 976, "CharacterName5m.gif"},
    {3002766, 985, "CharacterName4m.gif"},
    {3003823, 1004, "CharacterName3m.gif"},
    {3004899, 1005, "CharacterName2m.gif"},
    {3005976, 1015, "CharacterName1m.gif"},
    {3007059, 1095, "CharacterName5.gif"},
    {3008222, 1109, "CharacterName4.gif"},
    {3009399, 1166, "CharacterName3.gif"},
    {3010633, 1136, "CharacterName2.gif"},
    {3011837, 1177, "CharacterName1.gif"},
    {3013076, 1119, "LoadCoinm.gif"},
    {3014253, 1338, "LoadCoin.gif"},
    {3015975, 3126, "Warpm.gif"},
    {3019157, 3126, "Warp.gif"},
    {3022441, 1307, "YoshiWings.gif"},
    {3023807, 1116, "YoshiWingsm.gif"},
    {3024979, 902, "Tongue1.gif"},
    {3025941, 879, "Tongue1m.gif"},
    {3026876, 985, "Tongue2.gif"},
    {3027921, 985, "Tongue2m.gif"},
    {3029007, 1423,"Boot3m.gif"},
    {3030484, 1423, "Boot3.gif"},
    {3031961, 1503, "Boot2.gif"},
    {3033522, 1041, "Boot2m.gif"},
    {3034618, 13640, "Mount.gif"},
    {3048317, 3496, "Mountm.gif"},
    {3051871, 1041, "Boot1m.gif"},
    {3052966, 1503, "Boot1.gif"},
    {3054571, 1754, "MenuGFX1m.gif"},
    {3056382, 35359, "MenuGFX4.gif"},
    {3091802, 1496, "MenuGFX3m.gif"},
    {3093355, 1765, "MenuGFX3.gif"},
    {3095181, 2886, "MenuGFX2m.gif"},
    {3098124, 8430, "MenuGFX2.gif"},
    {3106611, 4595, "MenuGFX1.gif"},
    {3111314, 895, "Interface8m.gif"},
    {3112268, 895, "Interface8.gif"},
    {3113226, 936, "Interface7m.gif"},
    {3114221, 936, "Interface7.gif"},
    {3115220, 854, "Interface6m.gif"},
    {3116133, 879, "Interface6.gif"},
    {3117075, 862, "Interface0m.gif"},
    {3117996, 861, "Interface0.gif"},
    {3118914, 856, "MCursor3.gif"},
    {3159803, 822, "MCursor3m.gif"},
    {3119829, 896, "Heart2m.gif"},
    {3120784, 896, "Heart1m.gif"},
    {3121735, 992, "Heart2.gif"},
    {3122782, 992, "Heart1.gif"},
    {3123831, 874, "MCursor2.gif"},
    {3124766, 874, "MCursor2m.gif"},
    {3125697, 874, "MCursor1.gif"},
    {3126632, 874, "MCursor1m.gif"},
    {3127567, 931, "nCursor7m.gif"},
    {3128555, 994, "nCursor7.gif"},
    {3129606, 994, "nCursor6.gif"},
    {3130661, 931, "nCursor6m.gif"},
    {3131649, 994, "nCursor5.gif"},
    {3132704, 931, "nCursor5m.gif"},
    {3133692, 994, "nCursor3.gif"},
    {3134747, 931, "nCursor3m.gif"},
    {3135735, 994, "nCursor2.gif"},
    {3136790, 931, "nCursor2m.gif"},
    {3137778, 994, "nCursor1.gif"},
    {3138833, 931, "nCursor1m.gif"},
    {3139821, 994, "nCursor0.gif"},
    {3140876, 931, "nCursor0m.gif"},
    {3141868, 931, "nCursor4m.gif"},
    {3142856, 994, "nCursor4.gif"},
    {3143906, 1540, "Font2Sm.gif"}, // GENERATE BLACK-FILLED FRONT OF SAME SIZE!!!
    {3145507, 866, "ECursor3m.gif"},
    {3146430, 934, "ECursor3.gif"},
    {3147421, 981, "ECursor2.gif"},
    {3148463, 931, "ECursor2m.gif"},
    {3149451, 994, "ECursor1.gif"},
    {3150506, 931, "ECursor1m.gif"},
    {3151500, 865, "Interface5m.gif"},
    {3152424, 865, "Interface5.gif"},
    {3153338, 864, "Chat.gif"},
    {3154255, 864, "Chatm.gif"},
    {3155174, 2613, "Font2_3.gif"}, // GENERATE INVERTED MASK OF SAME SIZE!!!
    {3157839, 1903, "TextBox.gif"},
    {3159803, 822, "MCursor0m.gif"},
    {3160682, 822, "MCursor0.gif"},
    {3161563, 116454, "Font2_2m.gif"},
    {3278072, 116454, "Font2_2.gif"},
    {3394581, 50646, "Font2_1m.gif"}, // GENERATE BLACK-FILLED FRONT OF SAME SIZE!!!
    {3445286, 1440054, "Interface4.gif"},
    {4885399, 9462, "Container1.gif"},
    {4894924, 9462, "Container1m.gif"},
    {4904449, 9462, "Container2m.gif"},
    {4913970, 9462, "Container2.gif"},
    {4923495, 9462, "Container0m.gif"},
    {4933016, 9462, "Container0.gif"},
    {4942533, 726, "Font1_0.gif"},
    {4943315, 726, "Font1_0m.gif"},
    {4944096, 726, "Font1_1.gif"},
    {4944878, 726, "Font1_1m.gif"},
    {4945659, 726, "Font1_2.gif"},
    {4946441, 726, "Font1_2m.gif"},
    {4947222, 726, "Font1_3.gif"},
    {4948004, 726, "Font1_3m.gif"},
    {4948785, 726, "Font1_4.gif"},
    {4949567, 726, "Font1_4m.gif"},
    {4950348, 726, "Font1_5.gif"},
    {4951130, 726, "Font1_5m.gif"},
    {4951911, 726, "Font1_6.gif"},
    {4952693, 726, "Font1_6m.gif"},
    {4953474, 726, "Font1_7.gif"},
    {4954256, 726, "Font1_7m.gif"},
    {4955037, 726, "Font1_8.gif"},
    {4955819, 726, "Font1_8m.gif"},
    {4956600, 726, "Font1_9.gif"},
    {4957382, 726, "Font1_9m.gif"},
    {4958167, 670, "Interface1.gif"},
    {4958900, 670, "Interface1m.gif"},
    {4959629, 822, "Interface2.gif"},
    {4960514, 822, "Interface2m.gif"},
    {4961395, 1590, "Interface3.gif"},
    {4963048, 1590, "Interface3m.gif"},
    {0, 0, NULL}
};


int dumpMem(unsigned char*in, size_t in_size, const char *name)
{
    char filename[1024];
    FILE *out;

    snprintf(filename, 1024, "graphics/ui/%s", name);
    out = fopen(filename, "wb");
    if(!out)
    {
        printf("ERROR: can't open file '%s' for write.", filename);
        return 0;
    }

    fwrite(in, 1, in_size, out);
    fclose(out);
    return 1;
}

int dumpFile(FILE *in, off_t src_pos, size_t fileSize, const char *name)
{
    uint32_t writtenSize = 0, readSize = 0;
    char filename[1024];
    char outBuffer[1024];
    int outBufferSize = 0;
    FILE *out;

    fseek(in, src_pos, SEEK_SET);

    snprintf(filename, 1024, "graphics/ui/%s", name);

    out = fopen(filename, "wb");
    if(!out)
    {
        printf("ERROR: can't open file '%s' for write.", filename);
        return 0;
    }

    writtenSize = 0;
    do
    {
        readSize = (writtenSize + 1024 >= fileSize) ? (fileSize - writtenSize) : 1024;
        outBufferSize = fread(outBuffer, 1, readSize, in);
        fwrite(outBuffer, 1, outBufferSize, out);
        writtenSize += outBufferSize;
    } while(writtenSize < fileSize);

    fclose(out);
    return 1;
}

int main(int argc, char **argv)
{
    struct Exe2UI *it;
    FILE *in;
    const char *smbxName = "smbx.exe";
    char buffer[2048];

    if(argc > 1)
        smbxName = argv[1];

    in = fopen(smbxName, "rb");
    if(!in)
    {
        fprintf(stderr, "Can't open smbx.exe\n");
        return 1;
    }

    for(it = s_exe2ui; it->filename; it++)
    {
        fseek(in, it->offset, SEEK_SET);
        fprintf(stdout, "Dumping graphics/ui/%s ...\n", it->filename);
        fflush(stdout);
        if(strcmp(it->filename, "MenuGFX1m.gif") == 0)
        {
            if(fread(buffer, 1, it->size, in) != it->size)
            {
                --it;
                continue;
            }

            if(memcmp(buffer, g_MenuGFX1m_orig_gif, it->size) == 0)
            {
                dumpMem(g_MenuGFX1m_fixed_gif, sizeof(g_MenuGFX1m_fixed_gif), "MenuGFX1m.gif");
                continue;
            }
            else
            {
                fprintf(stderr, "...MenuGFX1m.gif doesn't matches to original, keeping existing one...\n");
                fflush(stdout);
            }
            fseek(in, it->offset, SEEK_SET);
        }
        dumpFile(in, it->offset, it->size, it->filename);
    }

    fclose(in);

    dumpMem(g_Font2S_gif, sizeof(g_Font2S_gif), "Font2S.gif");
    dumpMem(g_Font2_1_gif, sizeof(g_Font2_1_gif), "Font2_1.gif");
    dumpMem(g_Font2_3m_gif, sizeof(g_Font2_3m_gif), "Font2_3m.gif");

    fprintf(stdout, "Done!\n");
    fflush(stdout);

    return 0;
}