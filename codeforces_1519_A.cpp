#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll a,b,d,mn,mx;;
	cin >> a >> b >> d;
	mn=min(a,b);
	mx=max(a,b);
	mn*=(d+1);
	if(mn>=mx){
		cout<<"YES\n";
	}
	else cout << "NO\n";
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