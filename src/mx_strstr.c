#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    if (!*needle)
        return (char *)haystack;
    for (int i = 0; i < mx_strlen(haystack); i++) {
        if (haystack[i] == *needle && mx_strncmp(haystack + i, needle, mx_strlen(needle)) == 0) 
            return (char *)haystack + i; 
    }
    return NULL;
}
