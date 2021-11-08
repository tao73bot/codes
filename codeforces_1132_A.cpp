#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a==d){
		if((c>a+d)&&a+d>=2){
			cout << "1\n";
			return;
		}
		if((c>a+d)&&a+d<2){
			cout << "0\n";
			return;
		}
		else cout << "1\n";
	}
	else cout << "0\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}