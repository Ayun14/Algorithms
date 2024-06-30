#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n, m, result = 0;
	string person;
	map<string, int> map;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> person;
		map[person]++;
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> person;
		map[person]++;

		if (map[person] == 2)
			result++;
	}

	cout << result << endl;
	for (auto b : map)
	{
		if (b.second == 2)
			cout << b.first << endl;
	}
}