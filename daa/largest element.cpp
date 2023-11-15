#include <stdio.h>
int main() {
    int n, max, i = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] > max) max = arr[i];
    }
    printf("The largest element is: %d\n", max);
    return 0;
}
