
#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }
    int mat1[m][n], mat2[p][q], res[m][q];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &mat2[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
