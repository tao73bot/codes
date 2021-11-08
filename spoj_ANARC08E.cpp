#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

ll f(ll n)
{
	ll x = 1;
	for (ll i = 2; i <= n; i++) x *= i;
	return x;
}

ll NCR(ll n, ll r) {
	return f(n) / (f(r) * f(n - r));
}

void solve()
{
	ll a, b, n, x, y;
	while ((cin >> a >> b) && (a != -1 && b != -1)) {
		n = a + b;
		x = NCR(n, a);
		y = NCR(n, b);
		if (x == y && x == n) {
			cout << a << "+" << b << "=" << n;
		}
		else {
			cout << a << "+" << b << "!=" << n;
		}
		cout << "\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}