#include <iostream>
using namespace std;

int arr[101][101];

int main(void)
{
    int n, x, y;
    int result = 0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        for (int i = y; i < y + 10; ++i)
        {
            for (int j = x; j < x + 10; ++j)
            {
                if (arr[i][j] >= 1) continue;
                arr[i][j]++;
                result++;
            }
        }
    }

    cout << result;

    return 0;
}
