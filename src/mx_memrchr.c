#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    int size = (int)n;

    if (!s)
        return NULL;
    if(size > mx_strlen((const char *)s))
        size = mx_strlen((const char *)s);
    for (int i = mx_strlen((const char *)s) - 1;
            i >= mx_strlen((const char *)s) - size; i--) {
        if (((unsigned char *)s)[i] == c) {
            return &(((unsigned char *)s)[i]);
        }
    }
    return NULL;
}
