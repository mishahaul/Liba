#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (str == NULL) 
        return NULL; 
    char *newstr = mx_strtrim(str);
    char *finstr = mx_strnew(mx_strlen(newstr));
    int i = 0; 
    int j = 0;

    for (i = 0; i < mx_strlen(newstr); i++) {
        if (mx_isspace(newstr[i])) {
            if (mx_isspace(newstr[i + 1])) 
                j++;
            else 
                finstr[i - j] = newstr[i];
        }
        else 
            finstr[i - j] = newstr[i];
    }
    free(newstr);
    return finstr;
}




