#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int check = 0;
    int i = 0;

    if (!str) 
        return -1;
    for (i = 0; str[i] != '\0'; i++) { 
        if (str[i] != c && !check) {
            check = 1;
            count++;
        }
        if (str[i] == c)
            check = 0;
    }
    return count;  
}

