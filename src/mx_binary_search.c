#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        ++*count;
        if (mx_strcmp(arr[mid], s) > 0) {
            high = mid - 1;
        }
        else if (mx_strcmp(arr[mid], s) < 0) {
            low = mid + 1;
        }
        else 
            return mid; 
    }
    *count = 0;
    return -1;
}



