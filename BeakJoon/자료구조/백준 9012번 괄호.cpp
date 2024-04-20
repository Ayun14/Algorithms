#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		stack<char> stack;

		string s;
		cin >> s;

		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '(')
				stack.push(s[i]);
			else if (s[i] == ')')
			{
				if (stack.empty())
				{
					stack.push(s[i]);
					break;
				}
				else
					stack.pop();
			}
		}

		if (stack.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}