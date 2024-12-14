#include <iostream>
#include <algorithm>
using namespace std;

int coin[10];
int main()
{
    int N, K, MIN = INT16_MAX, count = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> coin[i];

    for (int i = N - 1; i >= 0; i--)
    {
        if (K - coin[i] >= 0)
        {
            count += K / coin[i];
            K = K % coin[i];
        }
        if (!K) break;
    }

    cout << count;
}