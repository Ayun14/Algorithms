#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int val;
    int numbers[100];
    for (int i = 0; i < N; i++)
    {
        cin >> val;
        numbers[i] = val;
    }

    int v;

    cin >> v;

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == v)
            cnt++;
    }

    cout << cnt;

    return 0;
}