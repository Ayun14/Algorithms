#include <stack>
#include <iostream>
using namespace std;

int main(void)
{
	int n, inp, cnt = 1;
	stack<int> s;

	cin >> n;

	while (n--)
	{
		cin >> inp;

		if (inp == cnt) cnt++;
		else s.push(inp);

		while (!s.empty() && s.top() == cnt)
		{
			s.pop();
			cnt++;
		}
	}

	if (s.empty()) cout << "Nice";
	else cout << "Sad";

	return 0;
}
