#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,i,x,y,ans=0;
	cin >> n >> x >> y;
	vector<ll> a(n);
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<n-1;i++){
		auto b=upper_bound(a.begin()+1+i,a.end(),y-a[i]);
		auto c=lower_bound(a.begin()+1+i,a.end(),x-a[i]);
		ans+=(b-c);
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