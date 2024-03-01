#include <iostream>
using namespace std;

int main(void)
{
    int H, M;
    int time = 45;
    cin >> H >> M;

    if (M >= time)
        M -= time;
    else
    {
        time -= M;
        M = 60 - time;

        if (H == 0)
            H = 23;
        else
            H -= 1;
    }

    cout << H << " " << M;

    return 0;
}