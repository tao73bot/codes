#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int a, b, c, mx, aa = 0, bb = 0, cc = 0;
	cin >> a >> b >> c;
	mx = max(a, b);
	mx = max(mx, c);
	if (a == b && a == c) cout << "1 1 1\n";
	else if (a == b && a == mx && a != c) cout << "1 1 " << mx - c + 1 << "\n";
	else if (a == c && a == mx && a != b) cout << "1 " << mx - b + 1 << " 1\n";
	else if (a == mx && a != b && a != c) cout << "0 " << mx - b + 1 << " " << mx - c + 1 << "\n";
	else if (b == c && b == mx && b != a) cout << mx - a + 1 << " 1 1\n";
	else if (b == mx && b != a && b != c) cout << mx - a + 1 << " 0 " << mx - c + 1 << "\n";
	else if (c == mx && c != a && c != b) cout << mx - a + 1 << " " << mx - b + 1 << " 0\n";
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