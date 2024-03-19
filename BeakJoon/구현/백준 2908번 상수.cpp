#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	char temp = a[0];
	a[0] = a[a.back()];
	a[a.back()] = temp;

	temp = b[0];
	b[0] = b[b.back()];
	b[b.back()] = temp;

	int A = stoi(a);
	int B = stoi(b);

	A > B ? cout << A : cout << B;

	return 0;
}