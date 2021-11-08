#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int a,b,k,ans;
	cin >> a >> b >> k;
	ans=(b-1)+(a-1)*b;
	if(k==ans) cout << "YES\n";
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