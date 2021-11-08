#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,a=0,b=0;
	string s,x,y;
	cin >> n;
	cin >> s;
	x=s;
	a++;
	n--;
	while(n--){
		cin >> s;
		if(x==s) a++;
		else{
			y=s;
			b++;
		}
	}
	if(a>b) cout << x << "\n";
	else cout << y << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}