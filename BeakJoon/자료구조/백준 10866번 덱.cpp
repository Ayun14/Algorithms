#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    int n, inp;
    deque<int> dq;

    cin >> n;

    while (n--)
    {
        if (n < 0) break;

        string s;
        cin >> s;

        if (s == "push_front")
        {
            cin >> inp;
            dq.push_front(inp);
        }
        else if (s == "push_back")
        {
            cin >> inp;
            dq.push_back(inp);
        }
        else if (s == "pop_front")
        {
            if (!dq.empty())
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else
                cout << -1 << "\n";
        }
        else if (s == "pop_back")
        {
            if (!dq.empty())
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else
                cout << -1 << "\n";
        }
        else if (s == "size")
        {
            cout << dq.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << dq.empty() << "\n";
        }
        else if (s == "front")
        {
            if (!dq.empty())
                cout << dq.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (s == "back")
        {
            if (!dq.empty())
                cout << dq.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}