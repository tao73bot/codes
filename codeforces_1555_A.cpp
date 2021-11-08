#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
void solve()
{
	ll n,a,b,c;
	cin >> n;
	if(n%6==0||n%8==0||n%10==0){
		if(n%6==0){
			cout << 15*(n/6) << "\n";
			return;
		}
		else if(n%8==0){
			cout << 20*(n/8) << "\n";
			return;
		}
		else cout << 25*(n/10) << "\n";
	}
	else{
		if(n<=6) cout << 15 << "\n";
		else{
			a=n-6*((n/6)-1);
			b=(n/6)-1;
			if(a>10) c=30;
			else if(a>8&&a<=10) c=25;
			else c=20;
			cout << 15*b+c << "\n";
		}
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