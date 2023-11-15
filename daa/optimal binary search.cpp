#include <stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int keys[] = {10, 12, 20};
    int freq[] = {34, 8, 50};
    int n = 3; 
    int dp[3][3]; 
    for (int i = 0; i < n; i++) {
        dp[i][i] = freq[i];
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = 1000; 
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += freq[k];
            }            for (int k = i; k <= j; k++) {
                int val = ((k > i) ? dp[i][k - 1] : 0) + ((k < j) ? dp[k + 1][j] : 0) + sum;
                dp[i][j] = min(dp[i][j], val);
            }
        }
    }
    printf("Minimum cost of the optimal binary search tree is %d\n", dp[0][2]);
    return 0;
}
