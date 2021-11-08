#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n,k,ans,d;
	cin >> n >> k;
	d=2*n+2*k;
	ans=(-3+sqrt(9+4*d))/2;
	cout << n-ans << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}