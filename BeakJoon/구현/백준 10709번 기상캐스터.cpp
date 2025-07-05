#include <iostream>
using namespace std;

int h, w;
char Jol[101][101];
int result[101][101];
void func(int row, int col, int time)
{
    if (w < col) return;

    if (0 == result[row][col])
        result[row][col] = time;
    else
        result[row][col] = min(time, result[row][col]);
    func(row, col + 1, time + 1);
}

int main(void)
{
    cin >> h >> w;
    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
            cin >> Jol[i][j];
    }

    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
        {
            if (Jol[i][j] == 'c')
                func(i, j, 0);
            else if (result[i][j] == 0)
                result[i][j] = -1;
        }
    }

    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
            cout << result[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}