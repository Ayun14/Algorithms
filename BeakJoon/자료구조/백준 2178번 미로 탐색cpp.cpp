#include <iostream>
#include <queue>
using namespace std;

int row = 0, col = 0;
char arr[100][100];
int visited[100][100] = { {-1,} };

queue<pair<int, int>> q;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
    q.push({ x,y });
    visited[x][y] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
            if (arr[nx][ny] == '1' && visited[nx][ny] == 0)
            {
                q.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
}

int main(void)
{
    cin >> row >> col;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            cin >> arr[i][j];
    }

    BFS(0, 0);

    if (row > 0 && col > 0)
        cout << visited[row - 1][col - 1];

    return 0;
}