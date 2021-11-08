#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,x,t,ans=0,a,b;
	cin >> n >> x >> t;
	if((n-1)*x<=t){
		ans=(n-1)*n/2;
	}
	else{
		a=(n-1)*x-t;
		if(a%x==0) b=a/x;
		else b=(a/x)+1;
		ans=(b+1)*(n-b-1);
		ans+=((n-b-1)*(n-b-2)/2);
	}
	cout << ans << "\n";
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