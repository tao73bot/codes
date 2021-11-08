#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,m,a,b,ans,x,y;
	cin >> n >> m >> a >> b;

	if(a>(b/m)){
		if(n%m==0) x=(n/m)*b;
		else if(n%m!=0) x=((n/m)+1)*b;
		y=(n/m)*b+(n%m)*a;
		ans=min(x,y);
	}
	else if(a<=(b/m)){
		ans=n*a;
	}
	cout << ans << "\n";
}

khela_shuru
{
	solve();
	gelo;
}