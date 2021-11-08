#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
        ll n,u,v,i;
        ll ans=INT_MAX;
		cin >> n >> u >> v;
        ll a[n];
		for(i=1;i<=n;i++){
			cin >> a[i];
		}
		for(i=2;i<=n;i++){
			if(fabs(a[i]-a[i-1])>1) ans=0;
			if(fabs(a[i]-a[i-1])==1) ans=min(ans,min(u,v));
			if(a[i]==a[i-1]) ans=min(ans,v+min(u,v));
		}
		cout << ans << "\n";
	}
	gelo;
}