#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int index = 0;

    if (str == NULL || sub == NULL)
        return -2;
    for (; index < mx_strlen(str); index++) {
        if (str[index] == *sub && mx_strncmp(str + index, sub, mx_strlen(sub)) == 0)
            return index;
    }
    return -1; 
}
