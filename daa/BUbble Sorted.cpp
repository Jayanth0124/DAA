#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i, s; n-- && (s = 1);) {
        for (i = 0; i < n; i++) {
            if (arr[i] > arr[i + 1]) {
                arr[i] ^= arr[i + 1] ^= arr[i] ^= arr[i + 1];
                s = 1;
            }
        }
        if (!s) break;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
