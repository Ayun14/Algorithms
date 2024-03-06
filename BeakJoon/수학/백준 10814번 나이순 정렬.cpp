#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main(void)
{
    int n;
    cin >> n;

    pair<int, string> tmp;
    vector<pair<int, string>> v;
    while (n--)
    {
        if (n < 0) break;

        cin >> tmp.first >> tmp.second;

        v.push_back(tmp);
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << ' ' << v[i].second << "\n";

    return 0;
}