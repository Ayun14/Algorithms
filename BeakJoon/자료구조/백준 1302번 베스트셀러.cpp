#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n;
	map<string, int> m;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string inp;
		cin >> inp;
		m[inp]++;
	}

	int big = -1;
	string result;
	for (auto book : m)
	{
		if (book.second > big)
		{
			result = book.first;
			big = book.second;
		}
	}

	cout << result;
}