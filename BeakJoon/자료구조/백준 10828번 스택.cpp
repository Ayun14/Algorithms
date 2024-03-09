#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(void)
{
    int n, inp;
    stack<int> stack;

    cin >> n;

    while (n--)
    {
        if (n < 0) break;

        string s;
        cin >> s;

        if (s == "push")
        {
            cin >> inp;
            stack.push(inp);
        }
        else if (s == "pop")
        {
            if (!stack.empty())
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (s == "size")
            cout << stack.size() << "\n";
        else if (s == "empty")
            cout << stack.empty() << "\n";
        else if (s == "top")
        {
            if (!stack.empty())
                cout << stack.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}