#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	string s;
	cin >> s;
	int n = s.size();
	int ans = n;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int num = (s[i] - '0') * 10 + (s[j] - '0');
			if (num % 25 == 0) ans = min(ans, j - i - 1 + n - j - 1);
		}
	}
	cout << ans << "\n";
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