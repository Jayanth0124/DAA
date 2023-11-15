#include <stdio.h>
#define V 4
#define INF 9999
void floydWarshall(int g[V][V]) {
    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                if (g[i][k] + g[k][j] < g[i][j])
                    g[i][j] = g[i][k] + g[k][j];
}
int main() {
    int g[V][V] = {{0, 5, INF, 10}, {INF, 0, 3, INF}, {INF, INF, 0, 1}, {INF, INF, INF, 0}};
    floydWarshall(g);
    printf("Shortest distances between all pairs of vertices:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (g[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}
