#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int m, n, k;
int arr[100][100];
int visited[100][100];

int cnt = 0;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int DFS(int row, int col)
{
    cnt++;
    visited[row][col] = true;

    for (int i = 0; i < 4; ++i)
    {
        int newX = col + dx[i];
        int newY = row + dy[i];
        if (newX < 0 || newX >= n || newY < 0 || newY >= m) continue;
        if (arr[newY][newX] == 0 && visited[newY][newX] == false)
        {
            DFS(newY, newX);
        }
    }

    return cnt;
}

int main(void)
{
    cin >> m >> n >> k;

    int x1, y1, x2, y2;
    for (int i = 0; i < k; ++i)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1; j < y2; ++j)
        {
            for (int k = x1; k < x2; ++k)
                arr[j][k] = 1;
        }
    }

    vector<int> result;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] == 0 && visited[i][j] == false)
            {
                cnt = 0;
                result.push_back(DFS(i, j));
            }
        }
    }
    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}