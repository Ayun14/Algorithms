#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    vector<int> v;

    cin >> N;

    int number;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        v.push_back(number);
    }

    int smallest = v[0];
    int largest = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (smallest > v[i])
            smallest = v[i];

        if (largest < v[i])
            largest = v[i];
    }

    cout << smallest << " " << largest;

    return 0;
}