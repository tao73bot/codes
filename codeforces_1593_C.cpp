#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n, k, cat = 0, ans = 0;
	cin >> n >> k;
	vector<ll> a(k);
	for (int i = 0; i < k; i++) cin >> a[i];
	sort(a.begin(), a.end());
 
	for (int i = k - 1; i >= 0; i--) {
		if (a[i] - cat <= 0) break;
		cat += (n - a[i]);
		ans++;
	}
	cout << ans << "\n";
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