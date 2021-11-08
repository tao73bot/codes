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
		ll n,k,i,mn=INT_MAX,x=0,c;
		cin >> n >> k;
		ll a[n],b[n+2]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			b[i+1]+=a[i]+b[i];
			x+=a[i];
		}
		for(i=1;i<=n-k+1;i++){
			mn=min(mn,b[i+k-1]-b[i-1]);
		}
		x=x-mn;
		cout << (mn*(mn+1)/2)+x << "\n";
	}
	gelo;
}