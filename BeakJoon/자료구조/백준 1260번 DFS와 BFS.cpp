#include <queue>
#include <iostream>
using namespace std;

int n, m, v;
bool input[1001][1001];
bool visited[1001];
void DFS(int index)
{
    cout << index << ' ';
    visited[index] = true;

    for (int i = 1; i <= n; ++i)
    {
        if (input[index][i] == true && visited[i] == false)
            DFS(i);
    }
}

void BFS(int index)
{
    cout << index << ' ';
    visited[index] = true;

    queue<int> q;
    q.push(index);

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int i = 1; i <= n; ++i)
        {
            if (input[now][i] == true && visited[i] == false)
            {
                visited[i] = true;
                cout << i << ' ';
                q.push(i);
            }
        }
    }
}

int main(void)
{
    cin >> n >> m >> v;

    int start, end;
    for (int i = 0; i < m; ++i)
    {
        cin >> start >> end;
        input[start][end] = true;
        input[end][start] = true;
    }

    DFS(v);
    cout << '\n';
    for (int i = 1; i <= n; ++i)
        visited[i] = false;
    BFS(v);
    return 0;
}