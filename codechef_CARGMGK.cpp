#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n, k, mn = 1e9, x = 0;
	cin >> n;
	vector<ll> a(n), b(n), c(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i - 1] > a[i] && i >= 1) {
			x++;
		}
	}
	if (x == 0) cout << "YES\n";
	else if (x == 1) {
		if (a[n - 1] <= a[0]) cout << "YES\n";
		else cout << "NO\n";
	}
	else cout << "NO\n";
	// cout << x << "\n";
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