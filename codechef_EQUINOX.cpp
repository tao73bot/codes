#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n,a,b,x=0,y=0;
	cin >> n >> a >> b;
	while(n--){
	    string s;
		cin >> s;
		if((s[0]=='E')||(s[0]=='Q')||(s[0]=='U')||(s[0]=='I')||(s[0]=='N')||(s[0]=='O')||(s[0]=='X')){
			x+=a;
		}
		else y+=b;
	}
	if(x>y) cout << "SARTHAK\n";
	else if(x==y) cout << "DRAW\n";
	else cout << "ANURADHA\n";
}

khela_shuru
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	gelo;
}