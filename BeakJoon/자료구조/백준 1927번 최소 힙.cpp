#include <queue>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);

    priority_queue<int, vector<int>, greater<int>> queue;
    int n;
    string input;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        if (input == "0")
        {
            if (queue.empty())
                cout << '0' << '\n';
            else
            {
                cout << queue.top() << '\n';
                queue.pop();
            }
        }
        else
            queue.push(stoi(input));
    }

    return 0;
}