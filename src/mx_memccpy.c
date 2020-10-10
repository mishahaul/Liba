#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    size_t i;
    
    for (i = 0; i < n; i++) {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        if (((unsigned char *)src)[i] == (unsigned char)c) {
            break;
        }
    }
    return i == n ? NULL : &(((unsigned char *)dst)[i + 1]);
}
