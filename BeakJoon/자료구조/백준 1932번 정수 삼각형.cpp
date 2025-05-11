#include <iostream>
using namespace std;

int input[501][501];
int dp[501][501];
int main(void)
{
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cin >> input[i][j];
    }

    dp[1][1] = input[1][1];
    dp[2][1] = input[1][1] + input[2][1];
    dp[2][2] = input[1][1] + input[2][2];
    for (int i = 3; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + input[i][j];
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            if (dp[i][j] > result) result = dp[i][j];
    }

    cout << result;

    return 0;
}