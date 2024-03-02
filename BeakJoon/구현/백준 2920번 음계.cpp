#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    bool isAscending = false;
    bool isDescending = false;

    int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int input[8];

    for (int i = 0; i < 8; i++)
        cin >> input[i];

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == input[i])
            isAscending = true;
        else
        {
            isAscending = false;
            break;
        }
    }

    reverse(arr, arr + 8);

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == input[i])
            isDescending = true;
        else
        {
            isDescending = false;
            break;
        }
    }

    if (isAscending) cout << "ascending";
    else if (isDescending) cout << "descending";
    else cout << "mixed";

    return 0;
}