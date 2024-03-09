#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int k, input, sum = 0;
    vector<int> v;

    cin >> k;

    while (k--)
    {
        if (k < 0) break;

        cin >> input;

        if (input == 0)
        {
            v.pop_back();
            continue;
        }
        v.push_back(input);
    }

    for (int i = 0; i < v.size(); i++)
        sum += v[i];

    cout << sum;

    return 0;
}