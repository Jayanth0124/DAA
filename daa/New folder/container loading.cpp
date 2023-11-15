#include <stdio.h>

#define MAX_ITEMS 100
#define MAX_CONTAINERS 100

int findMinContainers(int items[], int n, int containerCapacity) {
    int containers[MAX_CONTAINERS] = {0}, count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < count; j++)
            if (containers[j] >= items[i]) {
                containers[j] -= items[i];
                break;
            } else if (j == count - 1)
                containers[count++] = containerCapacity - items[i];

    return count;
}

int main() {
    int items[MAX_ITEMS], n, containerCapacity;

    printf("Enter n and capacity: ");
    scanf("%d%d", &n, &containerCapacity);

    printf("Enter item sizes:\n");
    for (int i = 0; i < n; i++) scanf("%d", &items[i]);

    printf("Min containers: %d\n", findMinContainers(items, n, containerCapacity));

    return 0;
}
