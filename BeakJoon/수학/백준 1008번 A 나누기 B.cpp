#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;
    cin >> a >> b;

    cout.precision(12);
    cout << fixed;
    cout << a / b;

    return 0;
}