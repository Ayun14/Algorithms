#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string alpha[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.", "...","-","..-","...-",".--","-..-","-.--","--.." };
    string num[10] = { "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." };

    int length;
    string inp;

    cin >> length;

    while (length--)
    {
        cin >> inp;

        for (int i = 0; i < 26; ++i)
        {
            if (inp == alpha[i])
            {
                char result = 'A' + i;
                cout << result;
            }
        }

        for (int i = 0; i < 10; ++i)
        {
            if (inp == num[i])
            {
                char result = '0' + i;
                cout << result;
            }
        }

        if (inp == "--..--")
            cout << ',';
        else if (inp == ".-.-.-")
            cout << '.';
        else if (inp == "..--..")
            cout << "?";
        else if (inp == "---...")
            cout << ":";
        else if (inp == "-....-")
            cout << "-";
        else if (inp == ".--.-.")
            cout << "@";
    }

    return 0;
}