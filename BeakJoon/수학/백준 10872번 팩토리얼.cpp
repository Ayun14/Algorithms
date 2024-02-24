#include <iostream>
using namespace std;

int main(void)
{
    int a;
    cin >> a;

    for (int i = a - 1; i > 0; i--)
        a *= i;

    if (a == 0)
        a = 1;

    cout << a;
}