#include <iostream>
using namespace std;

long long dp[1001] = { 0,1,2 };
long long DP(long long n)
{
    if (n <= 2 || dp[n] != 0) return dp[n];
    dp[n] = (DP(n - 1) + DP(n - 2)) % 10007;
    return dp[n];
}

int main(void)
{
    int n;
    cin >> n;
    cout << DP(n);

    return 0;
}