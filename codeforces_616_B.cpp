#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n,m,i,j,mn,mx=0;
	cin >> n >> m;
	ll a[n][m];
	for(i=0;i<n;i++){
		mn=1000000000;
		for(j=0;j<m;j++){
			cin >> a[i][j];
			if(a[i][j]<mn) mn=a[i][j];
		}
		if(mn>mx) mx=mn;
	}
	cout << mx << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}