#include <stdio.h>
void strassen(int A[2][2], int B[2][2], int C[2][2]) {
    int M1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int M2 = (A[1][0] + A[1][1]) * B[0][0];
    int M3 = A[0][0] * (B[0][1] - B[1][1]);
    int M4 = A[1][1] * (B[1][0] - B[0][0]);
    int M5 = (A[0][0] + A[0][1]) * B[1][1];
    int M6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int M7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
}
int main() {
    int A[2][2], B[2][2], C[2][2];
    printf("Enter 4 values for matrix A: ");
    for (int i = 0; i < 4; i++) scanf("%d", &A[i / 2][i % 2]);
    printf("Enter 4 values for matrix B: ");
    for (int i = 0; i < 4; i++) scanf("%d", &B[i / 2][i % 2]);
    strassen(A, B, C);
    printf("Resulting matrix C:\n");
    for (int i = 0; i < 4; i++) printf("%d%s", C[i / 2][i % 2], (i % 2 == 1) ? "\n" : " ");
    return 0;
}
