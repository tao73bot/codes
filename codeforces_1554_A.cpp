#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i,ans=0;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=1;i<n;i++){
		ans=max(ans,a[i]*a[i-1]);
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