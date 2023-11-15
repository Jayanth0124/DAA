#include <stdio.h>
#include <stdbool.h>

#define V 5

int path[V], graph[V][V] = {{0, 1, 0, 1, 0}, {1, 0, 1, 1, 1}, {0, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {0, 1, 1, 1, 0}};

void printSolution() {
    printf("Hamiltonian Circuit:\n");
    for (int i = 0; i < V; i++) printf("%d ", path[i]);
    printf("%d\n", path[0]);
}

bool isSafe(int v, int pos) {
    if (!graph[path[pos - 1]][v]) return false;
    for (int i = 0; i < pos; i++) if (path[i] == v) return false;
    return true;
}

bool hamiltonianCircuitUtil(int pos) {
    if (pos == V) return graph[path[pos - 1]][path[0]] == 1;

    for (int v = 1; v < V; v++) {
        if (isSafe(v, pos)) {
            path[pos] = v;
            if (hamiltonianCircuitUtil(pos + 1)) return true;
            path[pos] = -1;
        }
    }
    return false;
}

bool hamiltonianCircuit() {
    for (int i = 0; i < V; i++) path[i] = -1;
    path[0] = 0;

    if (!hamiltonianCircuitUtil(1)) {
        printf("Hamiltonian Circuit does not exist.\n");
        return false;
    }

    printSolution();
    return true;
}

int main() {
    hamiltonianCircuit();
    return 0;
}
