#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll l,r,d;
	cin >> l >> r;
	d=r-l;
	if(d>=2){
		if(l%2==0){
			cout << l << " " << l+1 << " " << l+2 << "\n";
		}
		else{
			if(d>=3){
				cout << l+1 << " " << l+2 << " " << l+3 << "\n" ;
			}
			else{
				cout << "-1\n";
			}
		}
	}
	else cout << "-1\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}