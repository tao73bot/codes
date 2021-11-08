#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll x, n;
	cin >> x >> n;
	ll m = n % 4;
	ll d = 4 * (n / 4) + 1;
	// cout << m << " " << d << "\n";
	for (int i = 0; i < m ; i++) {
		if (x % 2 == 0) x -= (i + d);
		else x += (i + d);
	}
	cout << x << "\n";
}
 
khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	// solve();
	gelo;
}