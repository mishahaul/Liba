#include "libmx.h"

int mx_selection_sort(char **arr, int size) {
    int min;
    int count = 0;
    int check = 0;
    char *buff;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min]) || 
            (mx_strlen(arr[j]) == mx_strlen(arr[min]) && 
            mx_strcmp(arr[j], arr[min]) < 0)) {
                min = j;
                check = 1 ;
            }
        }
        buff = arr[min];
        arr[min] = arr[i];
        arr[i] = buff;
            if (check == 1) {
                count++;
            }
            check = 0;
    }
    return count;
}
