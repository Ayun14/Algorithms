#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    int arr[10]{ 0 };

    int result = 0, cnt = 0;
    string inp;

    cin >> inp;

    for (int i = 0; i < inp.length(); i++)
    {
        int n = inp[i] - '0';

        if (n == 9)
            n = 6;

        ++arr[n];
    }

    arr[6] = (arr[6] / 2) + (arr[6] % 2);

    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] > result)
            result = arr[i];
    }
    cout << result;

    return 0;
}