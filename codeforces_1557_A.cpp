#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i;
	cin >> n;
	double a[n],sum=0,mx=-1*1e9;
	for(i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
		mx=max(a[i],mx);
	}
	sum=(sum-mx)/(n-1);
	mx=mx+sum;
	printf("%.9lf\n",mx );
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