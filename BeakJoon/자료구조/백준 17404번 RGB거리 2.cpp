#include <iostream>
using namespace std;

int cost[1001][3];
int dp[1001][3];
const int INF = 1000001;
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    int answer = INF;
    for (int start = 0; start < 3; ++start)
    {
        for (int color = 0; color < 3; ++color)
            dp[0][color] = color == start ? cost[0][color] : INF;

        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
        }

        for (int end = 0; end < 3; ++end)
        {
            if (start != end)
                answer = min(answer, dp[n - 1][end]);
        }
    }

    cout << answer << '\n';
    return 0;
}