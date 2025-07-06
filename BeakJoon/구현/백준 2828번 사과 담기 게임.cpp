#include <iostream>
using namespace std;

int main(void)
{
    int N, M, J;
    int result = 0;
    int apple[20];
    cin >> N >> M >> J;
    for (int i = 0; i < J; ++i)
        cin >> apple[i];

    int currentIndex = 1;
    for (int i = 0; i < J; ++i)
    {
        if (apple[i] < currentIndex)
        {
            int move = currentIndex - apple[i];
            result += move;
            currentIndex -= move;
        }
        else if (currentIndex + M - 1 < apple[i])
        {
            int move = apple[i] - (currentIndex + M - 1);
            result += move;
            currentIndex += move;
        }
    }

    cout << result;

    return 0;
}