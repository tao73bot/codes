#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,c,i,mx=0,x,y;
	cin >> n >> c;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		x=(-1*c);
		if(i<=n-2){
			y=a[i]-a[i+1]-c;
		}
		mx=max(x,mx);
		mx=max(mx,y);
	}
	cout << mx << "\n";
}

khela_shuru
{
	solve();
	gelo;
}