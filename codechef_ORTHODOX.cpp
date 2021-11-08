#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n >= 62) cout << "NO\n";
	else {
		bool f = true;
		set<ll>s;
		for (int i = 0; i < n ; i++) {
			ll x = 0;
			for (int j = i ; j < n; j++) {
				x = x | a[j];
				if (s.count(x) == 1) {
					f = false;
					break;
				}
				s.insert(x);
			}
		}
		if (!f) cout << "NO\n";
		else cout << "YES\n";
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