#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int T, a, b;
    vector<int> v;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        v.push_back(a + b);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";
}