#include <cmath>
#include <iostream>
using namespace std;

int n, r, c;
int result = 0;
void func(int nowR, int nowC, int N)
{
    if (nowR == r && nowC == c)
    {
        cout << result;
        return;
    }
    else if (nowR <= r && r < nowR + N && nowC <= c && c < nowC + N)
    {
        func(nowR, nowC, N / 2);
        func(nowR, nowC + N / 2, N / 2);
        func(nowR + N / 2, nowC, N / 2);
        func(nowR + N / 2, nowC + N / 2, N / 2);
    }
    else result += N * N;
}

int main(void)
{
    cin >> n >> r >> c;
    func(0, 0, pow(2, n));

    return 0;
}