#include <algorithm>
#include <iostream>
using namespace std;

int n, dpLength = 1;
int dp[101];
pair<int, int> lines[101];

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first) return true;
    return false;
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> lines[i].first >> lines[i].second;
    sort(lines + 1, lines + n + 1, cmp);

    dp[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        dp[i] = 1;
        for (int j = 1; j < i; ++j)
        {
            if (lines[j].second < lines[i].second)
            {
                dp[i] = max(dp[i], dp[j] + 1);
                dpLength = max(dpLength, dp[i]);
            }
        }
    }
    cout << n - dpLength;
    return 0;
}