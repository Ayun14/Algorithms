#include <algorithm>
#include <iostream>
using namespace std;

long long a, b;
long long result = 0;
bool isCompleted = false;
void DFS(long long num, long long cnt)
{
    if (num == b)
    {
        isCompleted = true;
        result = max(result, cnt);
        return;
    }

    long long a1 = num * 2;
    long long a2 = num * 10 + 1;

    if (a1 <= b)
        DFS(a1, cnt + 1);
    if (a2 <= b)
        DFS(a2, cnt + 1);
}

int main(void)
{
    cin >> a >> b;
    DFS(a, 1);
    if (isCompleted) cout << result;
    else cout << -1;

    return 0;
}