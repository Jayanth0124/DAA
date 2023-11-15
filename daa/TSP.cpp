#include <stdio.h>
#include <limits.h>
#define V 4
int min(int a, int b) { return a < b ? a : b; }
int tsp(int g[][V], int v, int c) {
    if (v == (1 << V) - 1) return g[c][0];
    int m = INT_MAX;
    for (int i = 0; i < V; i++) {
        if (!(v & (1 << i))) {
            int n = g[c][i] + tsp(g, v | (1 << i), i);
            m = min(m, n);
        }
    }
    return m;
}
int main() {
    int g[V][V] = {{0, 10, 15, 20}, {10, 0, 35, 25}, {15, 35, 0, 30}, {20, 25, 30, 0}};
    printf("Minimum tour cost: %d\n", tsp(g, 1, 0));
    return 0;
}
