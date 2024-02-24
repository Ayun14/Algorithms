#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int a, b;
    vector<int> v;

    cin >> a >> b;
    v.push_back(a + b);

    while (a != 0 && b != 0)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        v.push_back(a + b);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";
}