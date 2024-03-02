#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t;
    int score = 0;
    int result = 0;
    string s;

    cin >> t;

    while (t--)
    {
        if (t < 0) break;

        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'O')
                result += ++score;
            else if (s[i] == 'X')
                score = 0;
        }

        cout << result << "\n";
        score = 0;
        result = 0;
    }

    return 0;
}