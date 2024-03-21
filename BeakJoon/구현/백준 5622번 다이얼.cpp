#include <iostream>
#include <string>
using namespace std;

int main()
{
	int time = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		time += (int)(s[i] - 65) / 3 + 3;

		if (s[i] == 'S' || s[i] == 'V' || s[i] == 'Y' || s[i] == 'Z') time--;
	}

	cout << time;

	return 0;
}