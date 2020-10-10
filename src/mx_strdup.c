#include "libmx.h"

char *mx_strdup(const char *str) {
    char *dup = mx_strnew(mx_strlen(str));
    dup = mx_strcpy(dup, str);
    return dup;
}
