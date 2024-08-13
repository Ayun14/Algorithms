#include <algorithm>
#include <iostream>
using namespace std;

int n;
int S[10], B[10];
long long Min = 1000000000;
void func(int cnt, int idx, long long s, long long b)
{
    if (cnt >= 1 && abs(s - b) < Min)
        Min = abs(s - b);
    if (idx == n) return;
    func(cnt + 1, idx + 1, s * S[idx], b + B[idx]);
    func(cnt, idx + 1, s, b);
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> S[i] >> B[i];

    func(0, 0, 1, 0);
    cout << Min;

    return 0;
}