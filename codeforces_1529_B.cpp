#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n,i,cnt=0,d=0,cnt1=0,mn=1e9;
	cin >> n;
	ll a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>0){
			cnt=1;
			if(mn>a[i]) mn=a[i];
		}
		else{
			cnt1++;
			b[d++]=a[i];
		}
	}
	sort(b,b+d);
	for(i=1;i<d;i++){
		if(b[i]-b[i-1]<mn){
			cnt=0;
			break;
		}
	}
	cout << cnt1+cnt << "\n";
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