#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,k,i,ans=0,x,mx=0,d,z=0;
	cin >> n >> k;
	ll a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	ans+=b[0];
	mx+=b[0];
	for(i=1;i<n;i++){
		x=(a[i]-a[i-1]);
		d=ans-x*k;
		ans=max(z,d);
		ans+=b[i];
		mx=max(mx,ans);
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