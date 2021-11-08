#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i,d1,d2;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	d1=a[n-1]-a[1];
	d2=a[n-2]-a[0];
	cout << min(d1,d2) << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}