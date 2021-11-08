#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n, i, a = 0, b = 0, cnt = 0, j = 0;
	cin >> n;
	string s;
	cin >> s;
	for (i = 0; i < n; i++) {
		if (s[i] == '1') cnt++;
	}
	for (i = 0; i < n; i++) {
		if (s[i] == '1') a++;
		if (a == cnt) {
			a = i + 1;
			break;
		}
	}
	for (i = n - 1; i >= 0; i--) {
		if (s[i] == '1') b++;
		if (b == cnt) {
			b = j + 1;
			break;
		}
		j++;
	}
	if (cnt == 0) {
		cout << n << "\n";
	}
	else {
		cout << 2 * max(a, b) << "\n";
	}
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