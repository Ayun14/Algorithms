#include <iostream>
using namespace std;

int main(void)
{
    int n, k;
    int w, v;
    int dp[100001] = { 0 };
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> w >> v;
        for (int j = k; j >= w; --j)
            dp[j] = max(dp[j], dp[j - w] + v);
    }

    int result = 0;
    for (int i = 1; i <= k; ++i)
        result = max(result, dp[k]);
    cout << result;
    return 0;
}