#include "libmx.h"

void mx_str_reverse(char *s) {
	int n = mx_strlen(s);
	int i = 0;
	while (i <= n - i) {
		mx_swap_char(&s[i], &s[n - 1 - i]);
		i++;
	}
}


