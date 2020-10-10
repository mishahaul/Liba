#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;

    if (!*str || !*sub) 
        return -1;
    if (!mx_strlen(sub) || !mx_strlen(str))
        return 0;
    for (int i = 0; i < mx_strlen(str); i++) {
        if (str[i] == *sub && mx_strncmp(str + i, sub, mx_strlen(sub)) == 0)
            count++;
    }
    return count;
}

