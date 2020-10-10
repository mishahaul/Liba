#include "libmx.h"

void swap(char **s1, char **s2) {
    char *buff = *s1;
    *s1 = *s2;
    *s2 = buff;
}

int pivot_position(char **arr, int left, int right, int *count) {
    int pivot = (left + right) / 2;
    int first = left;
    int last = right;

    while (first < last) {
        while (mx_strlen(arr[first]) < mx_strlen(arr[pivot]) && first < pivot)
            first++;
        while (mx_strlen(arr[last]) > mx_strlen(arr[pivot]) && last > pivot)
            last--;
        if (first < last && mx_strlen(arr[first]) > mx_strlen(arr[last])) {
            pivot = (pivot == first) ? last : (pivot == last) ? first : pivot;
            swap(&arr[first], &arr[last]);
            (*count)++;
        }
        first++;
        last--;
    }
    return pivot;
}

int mx_quicksort(char **arr, int left, int right) {
    int pivot = 0;
    int count = 0;
    
    if (!arr)
        return -1;
    if (left < right) {
        pivot = pivot_position(arr, left, right, &count);
        count += mx_quicksort(arr, left, pivot - 1);
        count += mx_quicksort(arr, pivot + 1, right);
    }
    return count;
}


