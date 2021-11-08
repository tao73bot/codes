#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,x,i,ans=0,s=1;
	cin >> n >> x;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(i=0;i<n;i++){
		while((s+x)<=a[i])
			s+=x;
		ans+=(b[i]+1-s);
		s=b[i]+1;
	}
	cout << ans << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}