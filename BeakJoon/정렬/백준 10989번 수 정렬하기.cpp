#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[10001] = { 0 };
    while (n--)
    {
        if (n < 0) break;

        int input;
        cin >> input;
        arr[input] += 1;
    }

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";

    return 0;
}