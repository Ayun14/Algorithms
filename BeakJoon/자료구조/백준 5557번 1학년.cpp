#include <iostream>
using namespace std;

int arr[101];
long long dp[100][21];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    dp[1][arr[1]] = 1;
    for (int i = 2; i < n; ++i)
    {
        for (int j = 0; j <= 20; ++j)
        {
            if (dp[i - 1][j] != 0)
            {
                if (0 <= j - arr[i])
                    dp[i][j - arr[i]] += dp[i - 1][j];
                if (20 >= j + arr[i])
                    dp[i][j + arr[i]] += dp[i - 1][j];
            }
        }
    }
    cout << dp[n - 1][arr[n]];
    return 0;
}