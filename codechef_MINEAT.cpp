#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

ll f(ll mid, vector<ll>&v)
{
	ll sum = 0, i, n = v.size();
	for (i = 0; i < n; i++) {
		if (v[i] % mid == 0) sum += (v[i] / mid);
		else sum += ((v[i] / mid) + 1);
	}
	return sum;
}

void solve()
{
	ll n, i, a;
	cin >> n >> a;
	vector<ll> v(n);
	for (i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll lo = 1, hi = v[n - 1], mid;
	while (hi - lo > 1)
	{
		mid = (hi + lo) / 2;
		if (f(mid, v) > a) lo = mid;
		else hi = mid;
	}
	cout << hi << "\n";
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
	gelo;
}