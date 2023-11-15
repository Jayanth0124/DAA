#include <stdio.h>
struct MinMax {
    int min;
    int max;
};
struct MinMax findMinMax(int arr[], int low, int high) {
    struct MinMax result = {arr[low], arr[low]};

    for (int i = low; i <= high; i++) {
        if (arr[i] < result.min) {
            result.min = arr[i];
        }
        if (arr[i] > result.max) {
            result.max = arr[i];
        }
    }
    return result;
}
int main() {
    int arr[] = {12, 11, 30, 5, 100, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    struct MinMax result = findMinMax(arr, 0, arr_size - 1);
    printf("Minimum value in the list: %d\n", result.min);
    printf("Maximum value in the list: %d\n", result.max);
    return 0;
}
