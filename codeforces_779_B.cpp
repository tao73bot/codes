#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

ll power(ll a,ll x)
{
    ll p=1;
    for(ll i=0;i<x;i++){
        p*=a;
    }
    return p;
}

void solve()
{
	ll n,k,i,z=0,d,x=0;
	cin >> n >> k;
	if(n%power(10,k)==0){
		cout << "0\n";
	}
	else{
		d=n;
		while(d>0){
			if(d%10==0) z++;
			if(d%10!=0) x++;
			d/=10;
			if(z==k){
				break;
			}
		}
		if(z<k) cout << x+z-1 << "\n";
		else cout << x << "\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}