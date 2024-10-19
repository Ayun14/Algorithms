#include <iostream>
using namespace std;

long long arr[101] = { 0,1,1,1 };
long long f(long long n)
{
    if (n <= 3 || arr[n] != 0) return arr[n];
    arr[n] = f(n - 2) + f(n - 3);
    return arr[n];
}

int main(void)
{
    long long testcase, input;

    cin >> testcase;
    while (testcase--)
    {
        cin >> input;
        cout << f(input) << '\n';
    }

    return 0;
}