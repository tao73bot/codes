#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n,i,j,ans=0,x=0;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		a[i]=a[i]-i;
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]) x++;
		if(a[i]!=a[i+1]){
			x=0;
		}
		ans+=x;
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
	gelo;
}