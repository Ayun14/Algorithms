#include <iostream>
using namespace std;

int arr[101][101];
long long dp[101][101];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> arr[i][j];
    }

    dp[1][1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == n && j == n) break;
            if (dp[i][j] != 0)
            {
                if (j + arr[i][j] <= n)
                    dp[i][j + arr[i][j]] += dp[i][j];
                if (i + arr[i][j] <= n)
                    dp[i + arr[i][j]][j] += dp[i][j];
            }
        }
    }
    cout << dp[n][n];
    return 0;
}