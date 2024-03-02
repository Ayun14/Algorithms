#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count[42] = {};

    int input;
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        count[input % 42]++;
    }

    int result = 0;

    for (int i : count)
        if (i > 0) result++;

    cout << result;

    return 0;
}