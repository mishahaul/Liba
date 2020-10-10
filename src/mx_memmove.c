#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    if(!dst)
        return NULL;
    
    unsigned char *buff = (unsigned char *)dst;
    
    for (size_t i = 0; i < len; i++) {
        ((unsigned char *)buff)[i] = ((unsigned char *)src)[i];
    }
    return buff;
}
