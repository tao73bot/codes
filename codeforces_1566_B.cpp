#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n, ans = 0, x, i;
	string s;
	cin >> s;
	n = s.size();
	for (i = 0; i < n;) {
		if (s[i] == '0') {
			while (s[i] == '0') {
				i++;
			}
			ans += 1;
		}
		if (s[i] == '1') i++;
	}
	cout << (ans >= 2 ? 2 : ans) << "\n";
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