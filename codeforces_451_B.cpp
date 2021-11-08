#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	int l = -1, r = -1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			l = i;
			break;
		}
	}
	for (int i = n - 1; i >= 1; i--) {
		if (a[i] < a[i - 1]) {
			r = i;
			break;
		}
	}
	if (l == r && l == -1) {
		cout << "yes\n";
		cout << "1 1\n";
	}
	else {
		sort(b.begin(), b.end());
		reverse(a.begin() + l, a.begin() + r + 1);
		if (a == b) {
			cout << "yes\n";
			cout << l + 1 << " " << r + 1 << "\n";
		}
		else cout << "no\n";
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}