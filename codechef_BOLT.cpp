#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
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
		double k1,k2,k3,v,a;
		cin >> k1 >> k2 >> k3 >> v;
		a=100/(k1*k2*k3*v);
		a=(int)(a*100+.5);
		a=(double)a/100;
		if(a<9.58){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	gelo;
}