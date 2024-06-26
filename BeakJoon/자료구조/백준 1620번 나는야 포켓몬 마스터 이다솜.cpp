#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	string poketmon;
	unordered_map<string, int> mapStr;
	unordered_map<int, string> mapInt;

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		cin >> poketmon;
		mapStr.insert(make_pair(poketmon, i));
		mapInt.insert(make_pair(i, poketmon));
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> poketmon;
		if (poketmon[0] >= '0' && poketmon[0] <= '9')
			cout << mapInt[stoi(poketmon)] << "\n";
		else
			cout << mapStr[poketmon] << "\n";
	}
}