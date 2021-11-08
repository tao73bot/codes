#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n, k, i;
	cin >> n >> k;
	ll a[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	if(k>=3*n){
	    k=3*n+(k%(3*n));
	}
	for (i = 0; i < k; i++) {
		a[i % n] = (a[i % n] ^ a[n - 1 - i % n]);
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
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