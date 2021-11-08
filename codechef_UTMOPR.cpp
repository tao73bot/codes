#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n, k, sum = 0;
	cin >> n >> k;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (k == 1) {
		cout << (sum % 2 == 1 ? "even\n" : "odd\n");
	}
	else cout << "even\n";
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