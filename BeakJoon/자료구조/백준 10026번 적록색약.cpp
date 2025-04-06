#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int n;
int cnt = 0;
char arr[100][100] = { {0} };
bool visited[100][100] = { {0} };

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void DFS(int row, int col)
{
    if (visited[row][col]) return;
    visited[row][col] = true;

    for (int i = 0; i < 4; ++i)
    {
        int x = dx[i] + col;
        int y = dy[i] + row;

        if (x < 0 || x >= n || y < 0 || y >= n) continue;
        if (arr[y][x] == arr[row][col] && !visited[y][x]) DFS(y, x);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        for (int j = 0; j < n; ++j)
            arr[i][j] = str[j];
    }

    // 적록색약이 아닌 사람
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!visited[i][j])
            {
                DFS(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << " ";
    cnt = 0;
    memset(visited, false, sizeof(visited));

    // 초록색 글자를 빨간색으로 바꿈
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (arr[i][j] == 'G') arr[i][j] = 'R';
    }

    // 적록색약인 사람
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!visited[i][j])
            {
                DFS(i, j);
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}