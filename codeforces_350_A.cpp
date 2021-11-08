#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,m,mn=101,mx=0,i,f=0;
	cin >> n >> m;
	int a[n],b[m];
	for(i=0;i<n;i++){
		cin >> a[i];
		mn=min(a[i],mn);
		mx=max(a[i],mx);
	}
	for(i=0;i<m;i++){
		cin >> b[i];
		if(max(2*mn,mx)<b[i]) f++;
	}
	if(f==m) cout << max(2*mn,mx) << "\n";
	else cout << "-1\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}