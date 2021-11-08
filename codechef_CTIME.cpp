#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,k,t,i,gap=0;
	cin >> n >> k >> t;
	vector<pair<ll,ll>> p;
	for(i=0;i<n;i++){
		ll a,b;
		cin >> a >> b;
		p.push_back({a,b});
	}
	sort(p.begin(),p.end());
	gap+=p[0].first;
	ll x=p[0].first,y=p[0].second;
	for(i=0;i<n;i++){
		if(p[i].first>y){
			gap+=p[i].first-y;
			y=max(y,p[i].second);
		}
		else y=max(y,p[i].second);
	}
	gap+=(t-y);
	cout << (gap>=k ? "YES\n" : "NO\n");
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