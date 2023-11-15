#include <stdio.h>
#include <stdbool.h>
#include <climits>

#define N 4

int costMatrix[N][N], minCost = INT_MAX;

bool isSafe(int t, int a, int ass[], bool asd[]) {
    return !asd[t] && !asd[a] && (minCost + costMatrix[t][a] < minCost);
}

void branchAndBound(int t, int ass[], bool asd[], int c) {
    if (t == N) {
        if (c < minCost) {
            minCost = c;
            printf("Assignment: ");
            for (int i = 0; i < N; i++) printf("(%d, %d) ", i, ass[i]);
            printf("\n");
        }
        return;
    }

    for (int i = 0; i < N; i++)
        if (isSafe(t, i, ass, asd)) {
            ass[t] = i;
            asd[i] = true;
            branchAndBound(t + 1, ass, asd, c + costMatrix[t][i]);
            asd[i] = false;
            ass[t] = -1;
        }
}

int main() {
    printf("Enter the cost matrix (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &costMatrix[i][j]);

    int ass[N], minCost = INT_MAX;
    bool asd[N] = {false};

    for (int i = 0; i < N; i++) ass[i] = -1;

    printf("Minimum Cost: %d\n", minCost);
    branchAndBound(0, ass, asd, 0);

    return 0;
}
