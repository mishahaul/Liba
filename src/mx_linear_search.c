#include "libmx.h"

int mx_linear_search(char **arr, const char *s) {
    int count = 0;

    while (arr[count] != NULL) {
        if (mx_strcmp(arr[count], s) == 0) {
            return count;
        }
        count++;
    }
    return -1;
}
