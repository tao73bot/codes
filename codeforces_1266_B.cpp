#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,i,x;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>14){
			x=a[i]%14;
			if(x>=1&&x<=6) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}