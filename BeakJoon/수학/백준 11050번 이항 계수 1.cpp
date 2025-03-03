#include <iostream>
using namespace std;

int BinomialCoefficient(int n, int k)
{
    int numerator = 1;
    for (int i = n; i > 0; --i)
        numerator *= i;

    int denominator = 1;
    int i = n - k;
    for (i; i > 0; --i)
        denominator *= i;
    for (int i = k; i > 0; --i)
        denominator *= i;

    return numerator / denominator;
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    cout << BinomialCoefficient(n, k);

    return 0;
}