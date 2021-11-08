#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,k,i,cnt=0,x;
	cin >> n >> k;
	pair<ll,ll> a[n];
	for(i=0;i<n;i++){
		ll x;
		cin >> x;
		a[i]={x,i};
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++){
		cnt+=a[i+1].second!=(a[i].second+1);
	}
	cout << (cnt>=k ? "NO\n" : "YES\n");
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
	// solve();
	gelo;
}