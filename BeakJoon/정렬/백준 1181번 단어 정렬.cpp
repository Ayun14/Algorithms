#include <algorithm>
#include <iostream>
using namespace std;

string arr[20000];

bool cmp(string s1, string s2)
{
    if (s1.length() == s2.length())
        return s1 < s2;
    else
        return s1.length() < s2.length();
}

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n, cmp);

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;

        cout << arr[i - 1] << "\n";
    }

    return 0;
}
