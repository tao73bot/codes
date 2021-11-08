#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n,i,cnt=1,mx=0;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		if(a[i]<a[i+1]) cnt++;
		if(a[i]>=a[i+1]){
			cnt=1;
		}
		mx=max(mx,cnt);
	}
	mx=max(mx,cnt);
	cout << mx << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}