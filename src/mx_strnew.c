#include "libmx.h"

char *mx_strnew(const int size) {
	char *str = NULL;
    
    if (size < 0)
        return NULL;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return NULL;
	for (int i = 0; i <= size; i++) {
		str[i] = '\0';
	}
	return str;
}
