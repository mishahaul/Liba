#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int index = 0;

    if (!str)
        return -2;
    for (; index < mx_strlen(str); index++) {
        if (str[index] == c) 
            return index;        
    }
    return -1;
}
