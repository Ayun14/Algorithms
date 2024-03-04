#include <iostream>
using namespace std;

int main(void)
{
    int input[6];
    int arr[6] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; i++)
        cin >> input[i];

    for (int i = 0; i < 6; i++)
    {
        if (input[i] > arr[i])
            cout << "-" << input[i] - arr[i] << " ";
        else if (input[i] < arr[i])
            cout << arr[i] - input[i] << " ";
        else cout << 0 << " ";
    }

    return 0;
}