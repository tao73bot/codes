#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll a,b;
	cin >> a >> b;
 
	if(b==1){
		cout << "NO\n";
	}
	if(b>=2){
		cout << "YES\n";
		if(b==2){
			cout << 3*a<< " " << 5*a << " " << 8*a << "\n";
		}
		else
			cout << a << " " << (b-1)*a << " " << a*b << "\n";
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