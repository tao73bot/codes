#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n, i, cnt1 = 0, cnt2 = 0;
	cin >> n;
	vector<int> a(n), b(n);
	string s;
	cin >> s;
	for (i = 0; i < n; i++) {
		a[i] = s[i] - '0';
	}
	for (i = n; i < 2 * n; i++) {
		b[i - n] = s[i] - '0';
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (i = 0; i < n; i++) {
		if (a[i] < b[i]) cnt1++;
		if (a[i] > b[i]) cnt2++;
	}
	if (cnt1 == n || cnt2 == n) cout << "YES\n";
	else cout << "NO\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}