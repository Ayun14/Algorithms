#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n, result = 665;
    string temp;

    cin >> n;
    while (true)
    {
        result++;
        temp = to_string(result);
        if (temp.find("666") != -1)
        {
            if (--n == 0) break;
        }
    }

    cout << result;

    return 0;
}