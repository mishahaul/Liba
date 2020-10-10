#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    unsigned char *real_ptr = NULL;
    size_t ptr_size = malloc_size(ptr);

    if (!ptr) {
        real_ptr = (unsigned char *)malloc(sizeof(unsigned char *) * size);
        free (ptr);
        return real_ptr;
    }
    if (!size) {
        real_ptr = (unsigned char *)malloc(sizeof(unsigned char *) * size);
        free (ptr);
        return real_ptr;
    }
    if (size != 0 && ptr_size >= size)
        return ptr;
    real_ptr = (unsigned char *)malloc(sizeof(unsigned char *) * size);
    if (!real_ptr) 
        return NULL;
    real_ptr = mx_memcpy(real_ptr, ptr, size);
    free(ptr);
    return real_ptr;
}

