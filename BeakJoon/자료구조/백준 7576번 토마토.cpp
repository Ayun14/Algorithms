#include <iostream>
#include <queue>
using namespace std;

int m, n;
int result;
int arr[1001][1001];
int visited[1001][1001];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS()
{
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] == 1)
            {
                q.push(make_pair(i, j));
                visited[i][j] = 1;
            }
        }
    }

    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = now.second + dx[i];
            int ny = now.first + dy[i];
            if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
            if (visited[ny][nx] == 0 && arr[ny][nx] == 0)
            {
                q.push(make_pair(ny, nx));
                arr[ny][nx] = 1;
                visited[ny][nx] = visited[now.first][now.second] + 1;
                result = visited[ny][nx] - 1;
            }
        }
    }
}

int main(void)
{
    int inp;
    cin >> m >> n; // 가로, 세로

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> inp;
            arr[i][j] = inp;
        }
    }

    BFS();

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] == 0)
                result = -1;
        }
    }

    cout << result;

    return 0;
}