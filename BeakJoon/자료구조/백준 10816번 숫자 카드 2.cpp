#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, inp;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> inp;
		v.push_back(inp);
	}

	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> inp;
		cout << upper_bound(v.begin(), v.end(), inp) - lower_bound(v.begin(), v.end(), inp) << " ";
	}
}