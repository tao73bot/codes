#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n, i, a = 0, b = 0, x = 0;
	cin >> n;
	string s;
	cin >> s;

	for (i = 0; i < n; i++) {
		if (s[i] == 'H') a++;
		if (s[i] == 'T') a--;
		if (a < 0 || a >= 2) break;
	}
	cout << (a == 0 ? "Valid\n" : "Invalid\n");
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