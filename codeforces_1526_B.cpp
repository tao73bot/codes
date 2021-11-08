#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n,d;
	cin >> n;
	d=n%11;
	if(d==0){
		cout << "YES\n";
	}
	else{
		ll x=n-111*d;
		cout << (x%11!=0||x<0 ? "NO\n" : "YES\n");
	}
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