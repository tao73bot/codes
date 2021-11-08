#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,k,a,b,mx=-1e9,ans;
	cin >> n >> k;
	while(n--)
	{
		cin >> a >> b;
		if(b>k){
			ans=a-(b-k);
		}
		else ans=a;
		mx=max(mx,ans);
	}
	cout << mx << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}