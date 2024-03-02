#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int cnt = 1;
    string str;

    getline(cin, str);

    if (str.length() == 1 && str[0] == ' ')
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < str.length() - 1; i++)
    {
        if (str[i] == ' ')
            cnt++;
    }

    cout << cnt;

    return 0;
}