#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
void solve()
{
	ll a,b,ans,d,f=0;
	cin >> a >> b;
 
	d=a;
	for(ll i=1;i<1e9;i++){
		if(a==b){
			f=1;
			ans=i;
			break;
		}
		if(a>b) break;
		if(a<b) a*=d;
	}
	if(f){
		cout << "YES\n";
		cout << ans-1 << "\n";
	}
	else cout << "NO\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}