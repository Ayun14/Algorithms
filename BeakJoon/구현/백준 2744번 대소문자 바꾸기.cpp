#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = toupper(str[i]);
    }

    cout << str;

    return 0;
}