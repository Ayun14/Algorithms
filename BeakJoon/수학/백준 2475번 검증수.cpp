#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int plus = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        a *= a;
        plus += a;
    }

    cout << plus % 10;

    return 0;
}