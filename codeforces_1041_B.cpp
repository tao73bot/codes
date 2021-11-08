#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll a,b,c,d,g;
	cin >> a >> b >> c >> d;
	g=__gcd(c,d);
	c/=g;
	d/=g;
	a/=c;
	b/=d;
	cout << min(a,b) << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}