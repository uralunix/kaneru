/* SPDX-License-Identifier: BSD-2-Clause */
/* Copyright (c), 2023, KanOS Contributors */
#ifndef _INCLUDE_PSF2_H__
#define _INCLUDE_PSF2_H__
#include <kan/compiler.h>
#include <stddef.h>
#include <stdint.h>

#define PSF2_MAGIC_0 0x72
#define PSF2_MAGIC_1 0xB5
#define PSF2_MAGIC_2 0x4A
#define PSF2_MAGIC_3 0x86
#define PSF2_UNICODE 0x00000001
#define PSF2_VERSION 0x00000000

typedef struct psf2_header_s {
    uint8_t magic[4];
    uint32_t version;
    uint32_t header_size;
    uint32_t flags;
    uint32_t num_glyphs;
    uint32_t glyph_size;
    uint32_t glyph_height;
    uint32_t glyph_width;
} psf2_header_t;

typedef struct psf2_font_s {
    const psf2_header_t *header;
    const uint8_t *glyphs;
    const uint8_t *utable;
    size_t *unicode;
    wchar_t max_codepoint;
    size_t unicode_psize;
    size_t bwidth;
} psf2_font_t;

#endif /* _INCLUDE_PSF2_H__ */
