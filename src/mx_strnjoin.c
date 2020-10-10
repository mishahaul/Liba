#include "libmx.h"

char *mx_strnjoin(char const *s1, char const *s2, int len1, int len2) {
    if (s1 == NULL && s2 == NULL) 
        return NULL;
    if (s1 != NULL && s2 == NULL)
        return mx_strndup (s1, len1);
    if (s1 == NULL && s2 != NULL)
        return mx_strndup (s2, len2);
    if (s1 != NULL && s2 != NULL) {
        char *res = mx_strnew(len1 + len2);
        char * s1cut = mx_strndup(s1, len1);
        char * s2cut = mx_strndup(s2, len2);
		res = mx_strcat(mx_strcpy(res, s1cut), s2cut);
        free(s1cut);
        free(s2cut);
		return res;
    }
    return NULL;
}
