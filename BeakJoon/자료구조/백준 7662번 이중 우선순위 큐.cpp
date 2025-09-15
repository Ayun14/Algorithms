#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    int t, k;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> k;
        multiset<int> ms;

        char c;
        int input;
        for (int j = 0; j < k; ++j)
        {
            cin >> c >> input;
            if (c == 'I')
            {
                ms.insert(input);
            }
            else if (c == 'D' && !ms.empty())
            {
                if (input == 1)
                {
                    ms.erase(prev(ms.end()));
                }
                else if (input == -1)
                {
                    ms.erase(ms.begin());
                }
            }
        }

        if (ms.empty())
            cout << "EMPTY" << endl;
        else
            cout << *ms.rbegin() << " " << *ms.begin() << endl;
    }

    return 0;
}