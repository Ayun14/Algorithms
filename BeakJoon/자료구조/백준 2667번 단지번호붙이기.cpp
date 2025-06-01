#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int n;
int cnt = 0;
int arr[25][25];
int visited[25][25];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void DFS(int row, int col)
{
    ++cnt;
    visited[row][col] = true;

    for (int i = 0; i < 4; ++i)
    {
        int nextX = col + dx[i];
        int nextY = row + dy[i];
        if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= n) continue;
        if (arr[nextY][nextX] == 1 && visited[nextY][nextX] == false)
            DFS(nextY, nextX);
    }
}

int main(void)
{
    string str;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        for (int j = 0; j < str.length(); ++j)
            arr[i][j] = str[j] - '0';
    }

    vector<int> result;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] == 1 && visited[i][j] == false)
            {
                cnt = 0;
                DFS(i, j);
                result.push_back(cnt);
            }
        }
    }
    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (int i : result)
        cout << i << '\n';
    return 0;
}