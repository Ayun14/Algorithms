#include <string>
#include <iostream>
using namespace std;

char arr[500][500]{ '.' };
int dx[4]{ 0,0,-1,1 };
int dy[4]{ -1,1,0,0 };

int main(void)
{
    int R, C;
    bool isLive = true;
    cin >> R >> C;

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> arr[i][j];

            if (arr[i][j] == '.')
                arr[i][j] = 'D';
        }
    }

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            if (arr[i][j] == 'W')
            {
                for (int dir = 0; dir < 4; ++dir)
                {
                    int nx = i + dx[dir], ny = j + dy[dir];
                    if (nx <0 || ny < 0 || nx > R || ny > C)
                        continue;

                    if (arr[nx][ny] == 'S')
                    {
                        isLive = false;
                        break;
                    }
                }
            }
        }
    }

    cout << isLive << '\n';
    if (isLive)
    {
        for (int i = 0; i < R; ++i)
        {
            for (int j = 0; j < C; ++j)
                cout << arr[i][j];

            cout << '\n';
        }
    }

    return 0;
}