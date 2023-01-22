/* SPDX-License-Identifier: BSD-2-Clause */
/* Copyright (c), 2022, KanOS Contributors */
#include <wchar.h>

wchar_t *kwcsncpy(wchar_t *restrict s1, const wchar_t *restrict s2, size_t n)
{
    wchar_t *save = s1;
    while(*s2 && n--)
        *s1++ = *s2++;
    if(n)
        *s1 = 0;
    return save;
}
