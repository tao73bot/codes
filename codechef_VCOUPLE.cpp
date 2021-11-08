#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i,mx=0;
	cin >> n;
	ll a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	sort(b,b+n,greater<ll>());
	for(i=0;i<n;i++){
		mx=max(mx,a[i]+b[i]);
	}
	cout << mx << "\n";
}

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	gelo;
}