#include "libmx.h"

void mx_arr_rotate(int *arr, int size, int shift) {
    if (shift > 0) {
        while(shift != 0) {
            for (int i = 0; i < size ; i++) {
                int temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
            }
            shift--;
        }
    }
    else if (shift < 0) {
        while(shift != 0) {
            for (int i = size - 1; i >= 0; i--) {
                int temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
            }
            shift++;
        }
    }
}

