#include <iostream>
using namespace std;

int main(void)
{
    int arr[9];

    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    int best = arr[0];
    int number = 1;
    for (int i = 1; i < 9; i++)
    {
        if (best < arr[i])
        {
            best = arr[i];
            number = i + 1;
        }
    }

    cout << best << "\n" << number;

    return 0;
}