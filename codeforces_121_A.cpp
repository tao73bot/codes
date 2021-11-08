#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

ll a, b, sum = 0, d,x,i;
set<ll> lc;
map<ll,bool>mp;
void lucky(ll n=0)
{
	if(n){
		lc.insert(n);
		mp[n]=true;
	}
	if(n>1e10) return;
	lucky(n*10+4);
	lucky(n*10+7);
}


void solve()
{
	lucky();
	cin >> a >> b;
	d=b-a+1;
	while (d)
	{
		auto it=a;
		if(!mp[a]) it=*(lc.lower_bound(a));
		sum+=it*(it-a+1);
		d-=(it-a+1);
		if(d<0) sum+=(it)*d,d=0;
		a=it+1;
	}
	cout << sum << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}