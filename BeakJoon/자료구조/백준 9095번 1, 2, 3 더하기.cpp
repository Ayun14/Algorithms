#include <iostream>
using namespace std;

int dp[12] = { 0, 1, 2, 4 };
int main(void)
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 4; i <= n; ++i)
            if (dp[i] == 0) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

        cout << dp[n] << '\n';
    }
    return 0;
}