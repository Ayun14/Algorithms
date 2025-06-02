#include <iostream>
#include <string>
using namespace std;

char Vowel[] = { 'a', 'e', 'i', 'o', 'u' };
bool IsVowel(char c)
{
    for (int i = 0; i < 5; ++i)
        if (c == Vowel[i]) return true;

    return false;
}

int main(void)
{
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end") break;
        if (str.length() == 1)
        {
            cout << "<" << str << "> is acceptable.\n";
            continue;
        }

        bool isAcceptable = true;
        bool isHaveVowel = false;
        int continuousVowelChar = 1;
        int continuousConsonantChar = 1;
        for (int i = 1; i < str.length(); ++i)
        {
            bool isVowel1 = IsVowel(str[i - 1]);
            bool isVowel2 = IsVowel(str[i]);

            if (isVowel1 && isVowel2)
            {
                isHaveVowel = true;
                if (++continuousVowelChar == 3)
                {
                    isAcceptable = false;
                    break;
                }
            }
            else if (!isVowel1 && !isVowel2)
            {
                if (++continuousConsonantChar == 3)
                {
                    isAcceptable = false;
                    break;
                }
            }
            else
            {
                isHaveVowel = true;
                continuousVowelChar = 1;
                continuousConsonantChar = 1;
            }

            if (str[i - 1] == str[i])
            {
                if (str[i] != 'e' && str[i] != 'o')
                {
                    isAcceptable = false;
                    break;
                }
            }
        }

        if (isAcceptable && isHaveVowel)
            cout << "<" << str << "> is acceptable.\n";
        else
            cout << "<" << str << "> is not acceptable.\n";
    }
    return 0;
}