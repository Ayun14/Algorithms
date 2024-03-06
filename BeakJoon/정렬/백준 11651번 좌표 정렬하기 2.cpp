#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int x, y;
    vector<pair<int, int>> v;
    while (n--)
    {
        if (n < 0) break;

        cin >> x >> y;
        v.push_back(make_pair(y, x));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v[i].second << ' ' << v[i].first << "\n";

    return 0;
}