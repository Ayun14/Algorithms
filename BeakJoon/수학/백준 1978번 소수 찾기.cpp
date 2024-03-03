#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int input, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        int cnt = 0;
        for (int i = 1; i <= input; i++)
            if (input % i == 0) cnt++;

        if (cnt == 2)
            result++;
    }

    cout << result;

    return 0;
}