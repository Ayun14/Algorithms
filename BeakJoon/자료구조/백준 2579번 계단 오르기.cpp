#include <iostream>
using namespace std;

int stair[301];
int dp[301];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> stair[i];

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

    for (int i = 4; i <= n; ++i)
        dp[i] = max(dp[i - 3] + stair[i - 1], dp[i - 2]) + stair[i];

    cout << dp[n];
    return 0;
}