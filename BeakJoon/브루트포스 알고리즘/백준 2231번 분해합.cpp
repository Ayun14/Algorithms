#include <iostream>
using namespace std;

int Func(int num)
{
    int result = num, temp = 0;
    while (num != 0)
    {
        temp = num % 10;
        num /= 10;
        result += temp;
    }

    return result;
}

int main(void)
{
    int n;
    int temp, result = 0;

    cin >> n;
    while (true)
    {
        result++;
        temp = Func(result);

        if (n == temp) break;
        else if (temp >= 1000000)
        {
            result = 0;
            break;
        }
    }

    cout << result;

    return 0;
}