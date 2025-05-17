#include <iostream>
using namespace std;

int n;
int t[16];
int p[16];
int dp[16];

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> t[i] >> p[i];

    for (int i = n; i > 0; --i)
    {
        if (i + t[i] <= n + 1)
            dp[i] = max(dp[i + 1], dp[i + t[i]] + p[i]);
        else
            dp[i] = dp[i + 1];
    }
    cout << dp[1];
    return 0;
}