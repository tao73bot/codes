#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i,k,x,y,d,cnt=-1;
	cin >> n >> k;
	ll a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(i=0;i<n;i++){
		d=0;
		for(ll j=0;j<n;j++){
			d=max(d,(ll)(fabs(a[i]-a[j])+(fabs(b[i]-b[j]))));
		}
		if(d<=k) cnt=1;
	}
	cout << cnt << "\n";
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