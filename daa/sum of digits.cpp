#include <stdio.h>
int main() {
    int n, s = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n) {
        s += n % 10;
        n /= 10;
    }
    printf("Sum of digits: %d\n", s);
    return 0;
}
