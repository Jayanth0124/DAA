#include <stdio.h>
#include <stdlib.h>
struct Edge { int src, dest, weight; };
int cmp(const void *a, const void *b) { return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight; }
int f(int p[], int i) { return p[i] == -1 ? i : (p[i] = f(p, p[i])); }
void u(int p[], int x, int y) { p[f(p, x)] = f(p, y); }
void k(struct Edge e[], int V, int E) {
    struct Edge r[V - 1];
    qsort(e, E, sizeof(e[0]), cmp);
    int p[V];
    for (int v = 0; v < V; v++) p[v] = -1;
    for (int i = 0, j = 0; i < V - 1 && j < E; j++) {
        int x = f(p, e[j].src);
        int y = f(p, e[j].dest);
        if (x != y) r[i++] = e[j], u(p, x, y);
    }
    printf("Edges in MST:\n");
    for (int i = 0; i < V - 1; i++) printf("%d - %d, weight: %d\n", r[i].src, r[i].dest, r[i].weight);
}
int main() {
    int V = 4, E = 5;
    struct Edge e[] = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};
    k(e, V, E);
    return 0;
}
