#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	if (n == 1) cout << a[0] << "\n";
	else {
		ll it = a[0], ans = a[0];
		for (ll i = 1; i < n; i++) {
			a[i] = a[i] - it;
			ans = max(a[i], ans);
			it += a[i];
		}
		cout << ans << "\n";
	}
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
	gelo;
}