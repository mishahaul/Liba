#include "libmx.h"

static int number_lenght(int number) {
    int len_number = 0;

    if (number == 0)
        len_number = 1;
    if (number < 0) {
        len_number++;
        number = -number;
    } 
    while (number) {
        len_number++;
        number = number/10;
    }
    return len_number;
}

char *mx_itoa(int number) {
    int len = number_lenght(number);
    char *result = NULL;
    unsigned int copy_number = number;

    if (number == 0) 
        return "0";    
    result = mx_strnew(len);
    if (!result)
        return NULL;
    if (number < 0) {
        result[0] = '-';
        copy_number = -number;
    }
    while (copy_number) {
        result[len - 1] = copy_number % 10 + 48;
        copy_number /= 10;
        len--;
    }
    return result;
}

