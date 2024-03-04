#include <iostream>
using namespace std;

int main(void)
{
    int n, m, result = 0;
    int min = 9999999;
    int input[100];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> input[i];

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = input[i] + input[j] + input[k];

                if (m - sum < min && m - sum >= 0)
                {
                    min = m - sum;
                    result = sum;
                }
            }
        }
    }

    cout << result;

    return 0;
}