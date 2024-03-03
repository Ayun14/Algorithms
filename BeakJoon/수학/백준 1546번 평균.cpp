#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    float input;
    float best = 0;
    float result = 0;
    float arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;

        if (arr[i] > best) best = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] /= best;
        arr[i] *= 100;

        result += arr[i];
    }

    cout << result / (float)n;

    return 0;
}