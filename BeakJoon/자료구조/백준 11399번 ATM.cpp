#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    int n, inp, sum = 0;
    vector<int> pArr;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        pArr.push_back(inp);
    }

    sort(pArr.begin(), pArr.end());

    for (int i = n; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
            sum += pArr[j];
    }

    cout << sum;

    return 0;
}
