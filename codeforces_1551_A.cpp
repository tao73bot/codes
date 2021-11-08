#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,a,b;
	cin >> n;
	if(n%3==0){
		a=n/3;
		b=n/3;
	}
	else if(n%3==1){
		b=n/3;
		a=b+1;
	}
	else{
		a=n/3;
		b=a+1;
	}
	cout << a << " " << b << "\n";
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