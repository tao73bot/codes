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
	vector<ll>a(n), b, r;
	for (int i = 0; i < n; i++) cin >> a[i];
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') b.push_back(a[i]);
		else r.push_back(a[i]);
	}
	bool f = true;
	ll c = 1;
	sort(b.begin(), b.end());
	sort(r.begin(), r.end());
	for (int i = 0; i < b.size(); i++) {
		if (b[i] < c) f = false;
		c++;
	}
	for (int i = 0; i < r.size(); i++) {
		if (r[i] > c) f = false;
		c++;
	}
	// cout << f << "\n";
	cout << ((f) ? "YES\n" : "NO\n");
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