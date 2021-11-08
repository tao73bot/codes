#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n, i, x = 0, t;
	cin >> n;
	t = n;
	string s = "()";
	while (t--) {
		int a = x;
		while (a--) {
			cout << s;
		}
		for (i = 1; i <= 2 * n - 2 * x; i++) {
			if (i <= n - x) {
				cout << "(";
			}
			else cout << ")";
		}
		x++;
		cout << "\n";
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
	// solve();
	gelo;
}