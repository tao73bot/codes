#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int a,x,y,b;
	cin >> a >> x >> y >> b;

	if(a*(x+(y/2))<=b){
		cout << "YES\n";
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