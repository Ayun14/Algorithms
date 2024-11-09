#include <iostream>
using namespace std;

int n;
int arr[1000];
int dp[1000] = { 1, };
void DP()
{
	for (int i = 1; i < n; ++i)
	{
		int max = 0;
		for (int j = 0; j < i; ++j)
		{
			if (arr[j] < arr[i] && max < dp[j])
				max = dp[j];
		}

		dp[i] = max + 1;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	DP();

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (max < dp[i])
			max = dp[i];
	}

	cout << max;
}