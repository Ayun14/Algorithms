#include <iostream>
using namespace std;

int PeopleNum(int k, int n)
{
    if (k == 0)
        return n;
    if (n == 1)
        return 1;
    return (PeopleNum(k - 1, n) + PeopleNum(k, n - 1));
}

int main(void)
{
    int t, k, n;
    cin >> t;

    while (t--)
    {
        if (t < 0) break;

        cin >> k >> n;
        cout << PeopleNum(k, n) << "\n";
    }

    return 0;
}