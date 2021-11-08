#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll a,y,x,ans;
		cin >> a >> y >> x;
		if(a<y)
		{
			ans=1+x*a;
		}
		else ans=x*y;
		cout << ans << "\n";
	}
	gelo;
}