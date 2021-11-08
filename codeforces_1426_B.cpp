#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n, m, i, j, cnt = 0;
	cin >> n >> m;
	while (n--)
	{
		int a[2][2];
		cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
		if (a[0][1] == a[1][0]) cnt++;
	}
	if (m % 2 == 1) {
		cout << "NO\n";
	}
	else {
		cout << (cnt > 0 ? "YES\n" : "NO\n");
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