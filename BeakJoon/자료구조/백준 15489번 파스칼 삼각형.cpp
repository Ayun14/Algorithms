#include <iostream>
using namespace std;

int dp[31][31];

int main()
{
	int r, c, w;
	int result = 0;
	cin >> r >> c >> w;

	for (int i = 1; i < r + w; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (i == 1 || j == 1)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
		}
	}

	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j <= i; ++j)
			result += dp[r + i][c + j];
	}

	cout << result;
}