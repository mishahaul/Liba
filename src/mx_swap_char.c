#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
	char buff_s1 = *s1;
	*s1 = *s2;
	*s2 = buff_s1;
}

