#include <stdio.h>

#define M 10

int G[M][M], C[M], V;

void P() { for (int i = 0; i < V; printf("%d ", C[i++])); printf("\n"); }

int S(int v, int col) { for (int i = 0; i < V; i++) if (G[v][i] && col == C[i]) return 0; return 1; }

void GC(int v) { if (v == V) { P(); return; } for (int i = 1; i <= V; i++) if (S(v, i)) { C[v] = i; GC(v + 1); C[v] = 0; } }

int main() {
    printf("Enter n: ");
    scanf("%d", &V);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; scanf("%d", &G[i][j++]));

    printf("Graph Coloring Solutions:\n");
    GC(0);

    return 0;
}
