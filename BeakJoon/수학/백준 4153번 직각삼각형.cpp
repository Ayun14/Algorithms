#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
    int arr[3];
    int heru = 0;

    while (true)
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        if (arr[0] * arr[1] * arr[2] == 0) return 0;

        sort(arr, arr + 3);

        if (pow(arr[2], 2) == pow(arr[0], 2) + pow(arr[1], 2))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }

    return 0;
}