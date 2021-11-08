#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n, i, cnt = 0;
	cin >> n;
	string s;
	cin >> s;
	for (i = 2; i < n; i++) {
		if ((s[i - 2] == 'x' && s[i - 1] == 'x') && (s[i] == s[i - 1])) cnt++;
	}
	cout << cnt << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}