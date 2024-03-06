#include <iostream>
using namespace std;

int main(void)
{
    int a, b, v;
    cin >> a >> b >> v;

    int c = v - a;
    int d = a - b;

    int day = 1;
    day += c / d;

    if (c % d != 0)
        cout << ++day;
    else if (a >= v)
        cout << '1';
    else
        cout << day;

    return 0;
}