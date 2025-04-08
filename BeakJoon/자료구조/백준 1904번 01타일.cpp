#include <iostream>
using namespace std;

int dp[1000001] = { 0, 1, 2 };
int func(int n)
{
    if (dp[n] != 0) return dp[n];

    dp[n] = (func(n - 1) + func(n - 2)) % 15746;
    return dp[n];
}

int main(void)
{
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}