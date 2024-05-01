#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main(void)
{
	string s;

	while (true)
	{
		getline(cin, s);

		if (s == ".") break;

		stack<char> stack;

		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '(' || s[i] == '[')
				stack.push(s[i]);


			if (s[i] == ')')
			{
				if (!stack.empty() && stack.top() == '(')
					stack.pop();
				else
				{
					stack.push(s[i]);
					break;
				}
			}
			else if (s[i] == ']')
			{
				if (!stack.empty() && stack.top() == '[')
					stack.pop();
				else
				{
					stack.push(s[i]);
					break;
				}
			}
		}

		if (stack.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}
