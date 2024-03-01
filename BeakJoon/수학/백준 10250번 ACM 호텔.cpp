#include <iostream>
using namespace std;

int main(void)
{
    int T;
    int H, W, N;
    int x, y;
    cin >> T;

    while (T > 0)
    {
        cin >> H >> W >> N;

        x = N / H + 1;
        y = N % H;

        if (y == 0)
        {
            x -= 1;
            y = H;
        }

        printf("%d%02d\n", y, x);
        T--;
    }

    return 0;
}