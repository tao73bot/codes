#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
const long long M = 1e9 + 7;

void solve()
{
	int k, d, i, x;
	cin >> k >> d;
	if (k >= d) {
		if (k > 1 && d == 0) cout << "No solution\n";
		else {
			x = k - d;
			while (d--) cout << 1;
			for (i = 0; i < x; i++) cout << 0;
		}
	}
	else {
		if (k == 1) {
			cout << d << "\n";
		}
		else {
			x = d - k;
			cout << x;
			k--;
			while (k--) cout << 1;
		}
	}
	cout << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}