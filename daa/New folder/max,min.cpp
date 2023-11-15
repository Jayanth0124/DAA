#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list:\n");
    for (int i = 0; i < n; scanf("%d", &arr[i++]));

    for (int i = 0; i < n; i++) {
        int num = arr[i], min = num, max = num;
        for (int j = i + 1; j < n; printf("For %d: Min = %d, Max = %d\n", num, min, max), j++) {
            if (arr[j] < min) min = arr[j];
            else if (arr[j] > max) max = arr[j];
        }
    }

    return 0;
}
