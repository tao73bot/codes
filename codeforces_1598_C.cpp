#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
ll getPairsCount(long double arr[], ll n, ld sum)
{
	map<ld, ld> m;
 
	for (ll i = 0; i < n; i++)
		m[arr[i]]++;
 
	ll twice_count = 0;
 
	for (ll i = 0; i < n; i++) {
		twice_count += m[sum - arr[i]];
 
		if (sum - arr[i] == arr[i])
			twice_count--;
	}
 
	return twice_count / 2;
}
 
void solve()
{
	ll n, i;
	cin >> n;
	ld a[n];
	ld  sum = 0, k;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	k = (ld)(sum / n);
	k *= 2;
	cout << getPairsCount(a, n, k) << "\n";
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