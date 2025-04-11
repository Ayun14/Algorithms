#include <iostream>
using namespace std;

int number[1001];
int dp[1001]; // 증가하는
int r_dp[1001]; // 감소하는
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> number[i];
        dp[i] = r_dp[i] = 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (number[j] < number[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    for (int i = n; i >= 1; --i)
    {
        for (int j = n; j >= i; --j)
        {
            if (number[j] < number[i])
                r_dp[i] = max(r_dp[i], r_dp[j] + 1);
        }
    }

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int sum = dp[i] + r_dp[i] - 1;
        if (result < sum) result = sum;
    }

    cout << result;
    return 0;
}