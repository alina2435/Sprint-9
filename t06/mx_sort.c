#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (f(arr[j - 1], arr[j])) {
                int temp = arr [j - 1];

                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
