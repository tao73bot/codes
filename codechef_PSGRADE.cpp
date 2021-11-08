#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int a,b,c,d,x,y,z;
	cin >> a >> b >> c >> d >> x >> y >> z;

	if(x>=a&&y>=b&&z>=c){
		if(x+y+z>=d){
			cout << "YES\n";
		}
		else cout << "NO\n";
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