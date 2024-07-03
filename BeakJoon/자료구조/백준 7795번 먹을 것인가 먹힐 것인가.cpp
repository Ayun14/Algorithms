#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t, a, b, inp, result = 0;
	vector<int> aVector;

	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		for (int i = 0; i < a; ++i)
		{
			cin >> inp;
			aVector.push_back(inp);
		}

		sort(aVector.begin(), aVector.end());

		for (int i = 0; i < b; ++i)
		{
			cin >> inp;
			result += aVector.end() - upper_bound(aVector.begin(), aVector.end(), inp);
		}

		cout << result << "\n";
		result = 0;
		aVector.clear();
	}
}