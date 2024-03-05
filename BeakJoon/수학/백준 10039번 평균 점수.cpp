#include <iostream>
using namespace std;

int main(void)
{
    int result = 0;
    int input[5] = { 0, };

    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];

        if (input[i] < 40)
            result += 40;
        else
            result += input[i];
    }

    cout << result / 5;

    return 0;
}