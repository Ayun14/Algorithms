#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    int cnt = 0;
    string str;
    cin >> str;

    while (str.size() != 1)
    {
        cnt++;
        int sum = 0;
        for (int i = 0; i < str.size(); ++i)
            sum += str[i] - '0';

        str = to_string(sum);
        if (sum / 10 == 0) break;
    }

    cout << cnt << '\n';
    if (stoi(str) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}