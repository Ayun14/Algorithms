#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, inp;
	stack<int> stack;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> inp;

		if (inp == 1)
		{
			cin >> inp;
			stack.push(inp);
		}
		else if (inp == 2)
		{
			if (stack.empty())
				cout << -1 << "\n";
			else
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (inp == 3)
			cout << stack.size() << "\n";
		else if (inp == 4)
			cout << stack.empty() << "\n";
		else if (inp == 5)
		{
			if (!stack.empty())
				cout << stack.top() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}