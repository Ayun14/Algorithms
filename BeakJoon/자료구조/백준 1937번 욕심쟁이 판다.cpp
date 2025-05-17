#include <algorithm>
#include <iostream>
using namespace std;

int n;
int arr[501][501];
int dp[501][501];
int dx[] = { 1, -1, 0,0 };
int dy[] = { 0,0,1,-1 };
int DFS(int row, int col)
{
    if (dp[row][col] != 0) return dp[row][col];

    dp[row][col] = 1;
    for (int i = 0; i < 4; ++i)
    {
        int x = col + dx[i];
        int y = row + dy[i];
        if (x <= 0 || y <= 0 || x > n || y > n) continue;
        if (arr[row][col] < arr[y][x])
            dp[row][col] = max(dp[row][col], DFS(y, x) + 1);
    }

    return dp[row][col];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> arr[i][j];
    }

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            result = max(result, DFS(i, j));
    }
    cout << result;
    return 0;
}