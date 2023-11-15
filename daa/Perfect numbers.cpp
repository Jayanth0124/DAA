#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the range to find perfect numbers (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Perfect numbers in the range %d to %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        int sum = 1;
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0)
                sum += i + ((i * i != num) ? num / i : 0);

        if (sum == num && num != 1)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
