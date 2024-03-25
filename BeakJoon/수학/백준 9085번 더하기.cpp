#include <iostream>
using namespace std;

int main(void)
{
    int t, n, inp, sum = 0;

    cin >> t;

    while (t--)
    {
        if (t < 0) break;

        sum = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            sum += inp;
        }

        cout << sum << endl;
    }

    return 0;
}