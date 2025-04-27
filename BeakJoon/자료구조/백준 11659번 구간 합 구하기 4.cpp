#include <iostream>
using namespace std;

int dp[100001];
int main(void)
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    int input;
    for (int i = 1; i <= n; ++i)
    {
        cin >> input;
        dp[i] = input + dp[i - 1];
    }

    int start, end;
    for (int i = 0; i < m; ++i)
    {
        cin >> start >> end;
        cout << dp[end] - dp[start - 1] << '\n';
    }
    return 0;
}