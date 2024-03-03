#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    int arr[26];
    fill_n(arr, 26, -1);

    string s;
    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == (char)((int)'a' + i) && arr[i] == -1)
                arr[i] = j;
        }
    }

    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";

    return 0;
}