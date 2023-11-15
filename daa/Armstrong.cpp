#include <stdio.h>
#include <math.h>
int main() {
    int n, d, s = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (t = n; t; t /= 10) {
        d = t % 10;
        s += pow(d, (int)(log10(n) + 1));
    }
    printf(n == s ? "%d is an Armstrong number.\n" : "%d is not an Armstrong number.\n", n);
    return 0;
}
