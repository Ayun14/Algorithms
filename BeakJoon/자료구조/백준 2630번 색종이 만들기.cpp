#include <iostream>
using namespace std;

int n;
int white = 0, blue = 0;
int arr[128][128];

void func(int row, int col, int m)
{
    bool isPaper = true;
    int color = arr[row][col];
    for (int i = row; i < row + m; ++i)
    {
        for (int j = col; j < col + m; ++j)
        {
            if (arr[i][j] != color)
            {
                isPaper = false;
                break;
            }
        }
    }

    if (isPaper)
    {
        if (color == 1) blue++;
        else white++;
    }
    else
    {
        func(row, col, m / 2);
        func(row + m / 2, col, m / 2);
        func(row, col + m / 2, m / 2);
        func(row + m / 2, col + m / 2, m / 2);
    }
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    }

    func(0, 0, n);
    cout << white << '\n' << blue;
    return 0;
}