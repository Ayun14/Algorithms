#include <iostream>
using namespace std;

int input[10001];
int dp[10001];
int main(void)
{
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> input[i];

    dp[1] = input[1];
    dp[2] = input[1] + input[2];
    dp[3] = max(input[1], input[2]) + input[3];
    for (int i = 4; i <= n; ++i)
    {
        dp[i] = max(dp[i - 2], dp[i - 3] + input[i - 1]) + input[i];
        int temp = max(dp[i - 3], dp[i - 4] + input[i - 1]) + input[i];
        dp[i] = max(temp, dp[i]);
    }

    for (int i = 1; i <= n; ++i)
        if (dp[i] > result) result = dp[i];
    cout << result;

    return 0;
}