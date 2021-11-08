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
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int x = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] >= x) {
			a[i] = x;
			x++;
		}
	}
	cout << *max_element(a.begin(), a.end()) + 1 << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}