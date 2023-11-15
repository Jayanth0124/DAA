#include <stdio.h>

#define M 100

int s[M], b[M], n, t;

void f(int i, int k, int r) {
    if (k == t) { printf("Subset: {"); for (int j = 0; j < i; j++) printf("%d ", b[j]); printf("}\n"); }
    for (int j = k; j < n; j++)
        if (k + s[j] <= t) { b[i] = s[j]; f(i + 1, k + s[j], r - s[j]); }
}

void sS() {
    int u = 0;
    for (int i = 0; i < n; u += s[i++]);
    if (u < t) { printf("No subset found.\n"); return; }
    f(0, 0, u);
}

int main() {
    printf("Enter n: "); scanf("%d", &n);
    printf("Enter set elements:\n"); for (int i = 0; i < n; scanf("%d", &s[i++]));
    printf("Enter target sum: "); scanf("%d", &t);
    printf("Subsets with sum %d:\n", t); sS();
    return 0;
}
