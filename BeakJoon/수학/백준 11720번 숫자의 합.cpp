#include <iostream>
using namespace std;

int main(void)
{
    int n;
    char ch;

    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;
    }

    cout << total;

    return 0;
}