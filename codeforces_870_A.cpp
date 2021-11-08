#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,m,i,x=10,y=10,mn=10;
	cin >> n >> m;
	int a[n],b[m];
	for(i=0;i<n;i++){
		cin >> a[i];
		x=min(x,a[i]);
	}
	for(i=0;i<m;i++){
		cin >> b[i];
		y=min(y,b[i]);
	}
	for(i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j]) mn=min(mn,a[i]);
		}
	}
	if(mn==10) cout << min(x,y) << max(x,y) << "\n";
	else cout << mn << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}