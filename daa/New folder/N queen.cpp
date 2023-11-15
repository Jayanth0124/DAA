#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 8

int board[N];

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++)
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return false;
    return true;
}

void printSolution() {
    for (int i = 0; i < N; i++, printf("\n"))
        for (int j = 0; j < N; j++)
            printf("%c ", (board[i] == j) ? 'Q' : '.');
    printf("\n\n");
}

void solveNQueens(int row) {
    if (row == N) printSolution();
    else for (int col = 0; col < N; col++)
        if (isSafe(row, col)) {
            board[row] = col;
            solveNQueens(row + 1);
        }
}

int main() {
    solveNQueens(0);
    return 0;
}
