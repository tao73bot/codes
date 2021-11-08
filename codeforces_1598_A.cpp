#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n, i, x = 0, y = 0;
	cin >> n;
	string a, b;
	cin >> a >> b;
	for (i = 0; i < n; i++) {
		if (a[i] == '0') y++;
		if (a[i] == '1' && b[i] == '0') {
			x++;
			y++;
		}
		if (x == 1 && (b[i] == 1 && a[i] == 1)) {
			y++;
			x--;
		}
	}
	if (y == n) cout << "YES\n";
	else cout << "NO\n";
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