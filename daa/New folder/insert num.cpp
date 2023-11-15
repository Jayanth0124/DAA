#include <stdio.h>

int main() {
    int size, position, number;

    printf("Enter size, position, and number: ");
    scanf("%d %d %d", &size, &position, &number);

    int arr[size + 1];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; scanf("%d", &arr[i++]));

    for (int i = size; i > position; arr[i] = arr[--i]);
    arr[position] = number;

    printf("Updated list:\n");
    for (int i = 0; i <= size; printf("%d ", arr[i++]));

    return 0;
}
