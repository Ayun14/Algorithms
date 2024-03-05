#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int r = 0;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main(void)
{
    int a, b;
    cin >> a >> b;

    if (a >= b)
        cout << GCD(a, b) << "\n" << LCM(a, b);
    else if (b > a)
        cout << GCD(b, a) << "\n" << LCM(b, a);

    return 0;
}