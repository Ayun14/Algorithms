#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, inp;
	set<int> s;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> inp;
		s.insert(inp);
	}

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> inp;
		if (s.find(inp) != s.end())
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
}