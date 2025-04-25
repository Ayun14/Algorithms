#include <iostream>
using namespace std;

int n, result = 0;
int arr[100][100];
bool visited[100][100];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void DFS(int row, int col, int height)
{
    visited[row][col] = true;

    for (int i = 0; i < 4; ++i)
    {
        int newX = col + dx[i];
        int newY = row + dy[i];
        if (newX < 0 || newX >= n || newY < 0 || newY >= n) continue;
        if (arr[newY][newX] > height && visited[newY][newX] == false)
            DFS(newY, newX, height);
    }
}

int main(void)
{
    int biggest = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] > biggest) biggest = arr[i][j];
        }
    }

    for (int i = 0; i < biggest; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                if (arr[j][k] > i && visited[j][k] == false)
                {
                    cnt++;
                    DFS(j, k, i);
                }
            }
        }

        if (cnt > result) result = cnt;

        // reset
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
                visited[j][k] = 0;
        }
    }

    cout << result;

    return 0;
}