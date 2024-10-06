#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, k, x;
vector<int> visited;
vector<int> result;
vector<vector<int>> v;

void BFS(int city)
{
    queue<int> q;
    q.push(city);
    visited[city] = 0;

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int i = 0; i < v[now].size(); ++i)
        {
            if (v[now][i] == city) continue;

            if (visited[v[now][i]] == 0)
            {
                q.push(v[now][i]);
                visited[v[now][i]] = visited[now] + 1;
                if (visited[v[now][i]] == k)
                    result.push_back(v[now][i]);
            }
        }
    }
}

int main(void)
{
    int n1, n2;
    cin >> n >> m >> k >> x;
    v.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; ++i)
    {
        cin >> n1 >> n2;
        v[n1].push_back(n2);
    }

    BFS(x);

    sort(result.begin(), result.end());

    if (result.empty())
        cout << -1;
    else
    {
        for (int var : result)
            cout << var << '\n';
    }

    return 0;
}