#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *result = NULL;
    
    if (!str || !sub || !replace)
        return NULL;
    result = mx_strnew(mx_strlen(str) + (mx_strlen(replace) - mx_strlen(sub)) 
                                        * mx_count_substr(str, sub));
    for (int i = 0; *str != '\0';) {
        if (!mx_strncmp(str, sub, mx_strlen(sub))) {
            mx_strcat(result, replace);
            i += mx_strlen(sub);
            str += mx_strlen(replace);
        }
        else
            result[i++] = *str++;
    }
    return result;
}
