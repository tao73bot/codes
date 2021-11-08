#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,x,y;
		cin >> n;
		x=sqrt(n/2);
		y=sqrt(n/4);
		if((2*x*x==n)||4*y*y==n){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	gelo;
}