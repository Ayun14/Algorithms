#include <queue>
#include <iostream>
using namespace std;

int n, m;
int input[1001][1001];
int visited[1001][1001];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void BFS(int row, int col)
{
    visited[row][col] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(row, col));

    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nextX = now.second + dx[i];
            int nextY = now.first + dy[i];
            if (nextX < 0 || nextX >= m || nextY < 0 || nextY >= n) continue;
            if (input[nextY][nextX] == 1 && visited[nextY][nextX] == 0)
            {
                q.push(make_pair(nextY, nextX));
                visited[nextY][nextX] = visited[now.first][now.second] + 1;
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;
    int startN = 0, startM = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> input[i][j];
            if (input[i][j] == 2)
            {
                startN = i;
                startM = j;
            }
        }
    }

    BFS(startN, startM);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (input[i][j] == 1 && visited[i][j] == 0)
                cout << -1 << ' ';
            else
                cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}