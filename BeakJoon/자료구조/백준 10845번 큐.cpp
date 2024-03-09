#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    queue<int> q;
    int n, inp;
    cin >> n;

    while (n--)
    {
        if (n < 0) break;

        string s;
        cin >> s;

        if (s == "push")
        {
            cin >> inp;
            q.push(inp);
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (s == "front")
        {
            if (!q.empty())
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (s == "back")
        {
            if (!q.empty())
                cout << q.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}