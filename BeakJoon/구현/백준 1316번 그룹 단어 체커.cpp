#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    int n, cnt = 0;
    string inp;

    cin >> n;

    while (n--)
    {
        if (n < 0) break;

        cin >> inp;

        for (int i = 0; i < inp.length(); i++)
        {
            for (int j = i + 1; j < inp.length(); j++)
            {
                if (inp[i] == inp[j] && j - i > 1)
                {
                    if (!(inp[j - 1] == inp[j]))
                        inp = "0";
                }
            }
        }

        if (inp == "0")
            continue;

        cnt++;
    }

    cout << cnt;

    return 0;
}