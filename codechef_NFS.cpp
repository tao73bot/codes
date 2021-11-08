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
		ll u,v,a,s,ans;
		cin >> u >> v >> a >> s;
		if(u==v){
			cout << "YES\n";
		}
		else{
			ans=u*u-2*a*s;
			if(ans<=v*v){
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
	}
	gelo;
}