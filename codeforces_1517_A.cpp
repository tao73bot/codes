#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
vector<ll> v;
 
void vec()
{
	ll a=2050;
	v.push_back(a);
	for(int i=0;i<14;i++){
		a*=10;
		v.push_back(a);
	}
}
void solve()
{
	ll n,i,l,ans=0;
	cin >> n;
	l=n;
	vec();
	i=v.size()-1;
	while(1){
		if((l-2050)<0) break;
		if((l-v[i])>=0){
			ans+=(l/v[i]);
			l=l%v[i];
		}
		i--;
	}
	if(l==0) cout << ans << "\n";
	else cout << "-1\n";
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