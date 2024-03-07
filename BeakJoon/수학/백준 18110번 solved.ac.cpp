#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int result = 0;
    cin >> n;

    if (n == 0)
    {
        cout << result;
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int idx = round(n * 0.15);
    double sum = 0;
    double people = 0;

    for (int i = idx; i < n - idx; i++)
    {
        sum += v[i];
        people++;
    }

    result = round(sum / people);
    cout << result;

    return 0;
}