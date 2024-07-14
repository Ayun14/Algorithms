#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, inp;
    bool result;
    vector<int> numVec;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        numVec.push_back(inp);
    }
    sort(numVec.begin(), numVec.end());

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        cin >> inp;

        result = false;
        int left = 0, right = n - 1, mid;
        while (left <= right)
        {
            mid = (right + left) / 2;

            if (numVec[mid] == inp)
            {
                result = true;
                break;
            }
            else if (numVec[mid] < inp)
                left = mid + 1;
            else
                right = mid - 1;
        }

        cout << result << '\n';
    }

    return 0;
}