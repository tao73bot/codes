#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
void solve()
{
	int a,b,c,n,d;
	cin >> a >> b >> c;
	n=2*fabs(a-b);
	if(c>n||a>n||b>n) cout << "-1\n";
	else{
		if(c<=n&&c>(n/2)) d=c-(n/2);
		else{
			d=n/2+c;
		}
		cout << (d>n ? -1: d) << "\n";
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