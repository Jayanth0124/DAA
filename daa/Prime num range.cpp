#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range [%d, %d]:\n", start, end);
    for (int i = start; i <= end; i++)
        if (isPrime(i)) printf("%d ", i); 
    return 0;
}
