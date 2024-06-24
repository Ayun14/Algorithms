#include <iostream>
using namespace std;

int main(void)
{
    long long total, win, persent, newP, mid;
    cin >> total >> win;
    long long left = 1, right = total;

    persent = (win * 100) / total;
    if (persent >= 99)
    {
        cout << -1;
        return 0;
    }

    while (left <= right)
    {
        mid = (left + right) / 2;
        newP = (win + mid) * 100 / (total + mid);
        if (newP > persent)
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << left;

    return 0;
}