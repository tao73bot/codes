#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n, i, a, b, c;
	cin >> n;
	a = b = c = 0;
	vector<ll> v(n);
	for (i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] == 1) a++;
		else if (v[i] == 2) b++;
		else c++;
	}
	ll x, y, z;
	x = a + b;
	y = a + c;
	z = b + c;
	x = min(x, y);
	x = min(x, z);
	cout << x << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}