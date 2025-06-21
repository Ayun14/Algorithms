#include <queue>
#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        pq.push(input);
    }

    while (!pq.empty())
    {
        cout << pq.top() << '\n';
        pq.pop();
    }
    return 0;
}