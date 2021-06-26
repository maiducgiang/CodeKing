#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1e9 + 7;

ll cal(int n)
{
	if (n < 5)
	{
		return n % Mod;
	}
	else
	{
		return (3 * cal(n - 3) ) % Mod;
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--){
		int n;
		cin >> n;
		cout << cal(n) << endl;
	}
	return 0;
	//Cactus <3
}
