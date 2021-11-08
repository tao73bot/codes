#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n, m, i, j;
	cin >> n >> m;
	ll a[m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[j];
		}
		sort(a, a + m);
		ll x = i % m ;
		while (x > 0) {
			cout << a[m - x ] << " ";
			x--;
		}
		for (j = 0; j < m - i % m ; j++) {
			cout << a[j] << " ";
		}
		cout << "\n";
	}
}
 
khela_shuru
{
	SIS;
	int t, c = 0;
	cin >> t;
	while (t--)
	{
		solve();
	}
	// solve();
	gelo;
}