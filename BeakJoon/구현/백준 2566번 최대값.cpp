#include <iostream>
using namespace std;

int main(void)
{
    int inp, result;
    int max = 0, row, col;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cin >> inp;

            if (inp >= max)
            {
                max = inp;
                row = i;
                col = j;
            }
        }
    }

    cout << max << '\n' << row << " " << col;

    return 0;
}
