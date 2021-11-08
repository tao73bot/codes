#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll a,b,t,d,ans=0,i;
	cin >> a >> b >> t >> d;
	ans+=a;
	for(i=1;i<t-1;i++){
		ans+=min((a+i*d),(b+(t-i-1)*d));
	}
	ans+=b;
	cout << ans << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}