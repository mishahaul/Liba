#include "libmx.h"

void mx_printint(int n) {
	unsigned int t = n * (n >= 0) - n * (n < 0);
	if (n < 0) {
		n = -n;
		mx_printchar('-');
	}
	if (t / 10) {
		mx_printint(t / 10);
    }
	mx_printchar(t % 10 + 48);
}

