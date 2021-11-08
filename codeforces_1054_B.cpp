#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0

int main()
{
	SIS;
	ll n,i,mx=-1,ans,cnt=0;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(mx+1<a[i]){
			ans=i+1;
			cout << ans << "\n";
			break;
		}
		else{
			mx=max(a[i],mx);
			cnt++;
		}
	}
	if(cnt==n) cout << "-1\n";
	gelo;
}