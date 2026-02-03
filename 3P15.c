#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char str[100], rev[100];
    int dp[101][101];
    int i, j, n;

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    // Reverse the string
    for (i = 0; i < n; i++)
        rev[i] = str[n - i - 1];
    rev[n] = '\0';

    // LCS DP table
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (str[i - 1] == rev[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int lps = dp[n][n];
    int minDeletions = n - lps;

    printf("Minimum deletions required: %d\n", minDeletions);

    return 0;
}