#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int cnts[10] = { 0 };
    cin >> a >> b >> c;

    int abc = a * b * c;

    while (abc > 0)
    {
        cnts[abc % 10] += 1;
        abc /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << cnts[i] << "\n";
    }

    return 0;
}