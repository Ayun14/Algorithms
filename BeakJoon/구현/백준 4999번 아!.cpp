#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    string a, b;
    cin >> a >> b;

    if (a.size() >= b.size()) cout << "go";
    else cout << "no";

    return 0;
}