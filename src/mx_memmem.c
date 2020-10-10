#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, 
                const void *little, size_t little_len) {
    if (!little || !big)
        return NULL;
    for (size_t i = 0; i < big_len; i++) {
        if (((unsigned char *)big)[i] == ((unsigned char *)little)[0] &&
        mx_memcmp(&((unsigned char *)big)[i], (unsigned char *)little, little_len) == 0) {
            return &((unsigned char *)big)[i];
        }
    }
    return NULL;
}
