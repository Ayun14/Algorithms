#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() < b.size())
        return true;
    else if (a.size() == b.size())
        return a < b;
    return false;
}

int main(void)
{
    int n;
    cin >> n;

    vector<string> strV(n);
    for (int i = 0; i < n; ++i)
        cin >> strV[i];

    vector<string> result;
    for (int i = 0; i < n; ++i)
    {
        string str = "";
        for (int j = 0; j < strV[i].size(); ++j)
        {
            if ('0' <= strV[i][j] && strV[i][j] <= '9')
                str += strV[i][j];

            if (j == strV[i].size() - 1 || ('a' <= strV[i][j] && strV[i][j] <= 'z'))
            {
                if (!str.empty())
                {
                    result.push_back(str);
                    str = "";
                }
            }
        }
    }

    for (int i = 0; i < result.size(); ++i)
    {
        while (true)
        {
            if (1 < result[i].size() && result[i].front() == '0')
                result[i].erase(0, 1);
            else
                break;
        }
    }

    sort(result.begin(), result.end(), cmp);
    for (string num : result)
        cout << num << '\n';

    return 0;
}