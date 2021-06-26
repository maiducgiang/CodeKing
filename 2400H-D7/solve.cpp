#include <bits/stdc++.h>
using namespace std;
#define maxn 5003
const int mod = 1e9 + 7;

long long dp[maxn][maxn];
int n, k;

long long calc(long long x, int y)
{
	if (y == 0)
		return 1;
	long long res = calc(x, y / 2);
	if (y % 2)
		return ((res * res % mod) * x % mod) % mod;
	return (res * res % mod);
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		memset(dp, 0, sizeof(dp));
		cin >> n >> k;
		for (int i = 0; i <= k; i++)
			dp[0][i] = calc(2LL, n - i);
		for (int i = 1; i <= k; i++)
			for (int j = 0; j <= k; j++)
				dp[i][j] = (j * dp[i - 1][j] + (n - j) * dp[i - 1][j + 1]) % mod;
		cout << dp[k][0] % mod << endl;
	}
	return 0;
}
