#include <iostream>
using namespace std;

int main(void)
{
    int h, m, time;

    cin >> h >> m >> time;

    m += time;
    while (true)
    {
        if (m >= 60)
        {
            m -= 60;
            ++h;

            if (h >= 24)
                h = 0;
        }
        else
            break;
    }

    cout << h << " " << m;

    return 0;
}
