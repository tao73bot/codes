#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
const long long M = 1e9 + 7;
 
ll po(ll n, ll p)
{
	ll ans = 1;
	while (p) {
		if (p & 1) {
			ans = (ans * n) % M;
		}
		n = (n * n) % M;
		p >>= 1;
	}
	return ans%M;
}
 
 
khela_shuru
{
	SIS;
	int t, c = 0;
	cin >> t;
	while (t--)
	{
		ll n, k,d=0,ans=0;
		cin >> n >> k;
		while(k>0){
			if(k%2==1) ans+=po(n,d);
			d++;
			k/=2;
		}
		cout << ans%M << "\n";
		//cout << power(n,k) << "\n";
	}
	gelo;
}