#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,i,j,mn=1e9;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++){
		mn=min(mn,(a[i+1]-a[i]));
	}
	for(i=0;i<n-1;i++){
		if(mn==(a[i+1]-a[i])){
			cout << a[i] << " ";
			for(j=i+2;j<n;j++) cout << a[j] << " ";
			for(j=0;j<i;j++) cout << a[j] << " ";
			cout << a[i+1] << "\n";
			break;
		}
	}
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