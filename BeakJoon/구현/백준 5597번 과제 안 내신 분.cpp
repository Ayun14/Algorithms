#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[31] = { 0, };
    int a;
    for (int i = 0; i < 28; i++)
    {
        cin >> a;
        arr[a] = 1;
    }

    for (int i = 1; i < 31; i++)
    {
        if (!arr[i]) cout << i << "\n";
    }

    return 0;
}