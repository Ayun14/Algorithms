#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

const int INF = 1e9;
int V, E, K;
vector<pair<int, int>> graph[20001];
int dist[20001];
void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    fill(dist, dist + V + 1, INF);

    dist[start] = 0;
    pq.push({ 0, start });

    while (!pq.empty())
    {
        pair<int, int> now = pq.top();
        pq.pop();

        if (dist[now.second] < now.first) continue;

        for (pair<int, int> p : graph[now.second])
        {
            int newCost = now.first + p.second;
            if (newCost < dist[p.first])
            {
                dist[p.first] = newCost;
                pq.push({ newCost, p.first });
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> V >> E >> K;
    while (E--) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({ v, w });
    }

    dijkstra(K);

    for (int i = 1; i <= V; ++i) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << '\n';
    }

    return 0;
}