#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n;
	cin >> n;
	int x[n][5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) cin >> x[i][j];
	}
	bool ok = false;
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			int a = 0, b = 0, c = 0;
			for (int k = 0; k < n; k++) {
				if (x[k][i] == 1 && x[k][j] == 1) b++;
				else if (x[k][i] == 1) a++;
				else if (x[k][j] == 1) c++;
			}
			int gf = n / 2 - a, gs = n / 2 - c;
			if (gf >= 0 && gs >= 0 && b == gf + gs) {
				ok = true;
				break;
			}
		}
		if (ok) break;
	}
	if (ok) cout << "YES\n";
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
	gelo;
}