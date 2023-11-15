
#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0, m, t; i < n - 1; i++)
        for (m = i + 1; m < n; m++)
            if (arr[m] < arr[i])
                t = arr[i], arr[i] = arr[m], arr[m] = t;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    selectionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
