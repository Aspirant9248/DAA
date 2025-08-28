#include <stdio.h>

int main()
{
    int v[] = {1, 4, 5, 7}; // values
    int w[] = {1, 3, 4, 5}; // weights
    int n = 4, W = 7;

    int dp[n + 1][W + 1];

    // Build DP table
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (w[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                int include = v[i - 1] + dp[i - 1][j - w[i - 1]];
                int exclude = dp[i - 1][j];
                dp[i][j] = (include > exclude) ? include : exclude;
            }
        }
    }

    // Print max value
    printf("Maximum value: %d\n", dp[n][W]);

    // Trace selected weights
    printf("Selected weights: ");
    int i = n, j = W;
    while (i > 0 && j > 0)
    {
        if (dp[i][j] != dp[i - 1][j])
        {
            printf("%d ", w[i - 1]);
            j -= w[i - 1];
        }
        i--;
    }
    printf("\n");

    return 0;
}
