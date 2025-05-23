#include <iostream>
#include <limits.h>
using namespace std;

int dp1[100001], dp2[100001];
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> dp1[i];

    int result = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            dp2[i] = dp1[i];
            result = dp2[i];
            continue;
        }

        dp2[i] = max(dp2[i - 1] + dp1[i], dp1[i]);
        result = max(dp2[i], result);
    }
    cout << result;
    return 0;
}