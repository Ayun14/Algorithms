#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[26] = { 0, };

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);

        arr[s[i] - (int)'A']++;
    }

    int best = 0;

    for (int i = 1; i < 26; i++)
        if (arr[best] < arr[i]) best = i;

    for (int i = 1; i < 26; i++)
    {
        if (arr[best] == arr[i] && best != i)
        {
            cout << '?';
            return 0;
        }
    }

    char result = 'A' + (char)best;
    cout << result;

    return 0;
}