#include <iostream>
using namespace std;

int main(void)
{
    int n, result = 0;
    cin >> n;

    for (int i = 1; i <= n; i *= 10)
        result += n - i + 1;

    cout << result;

    return 0;
}