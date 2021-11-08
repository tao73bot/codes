#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	string s, a;
	cin >> a;
	cin >> s;
	int ans = 0;
	map<char, int>mp;
	for (int i = 1; i <= 26; i++) {
		mp[a[i - 1]] = i;
	}
	for (int i = 0; i < s.size() - 1; i++) {
		ans += fabs(mp[s[i + 1]] - mp[s[i]]);
	}
	cout << ans << "\n";
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