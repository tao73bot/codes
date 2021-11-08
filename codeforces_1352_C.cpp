#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,k,i,ans,a,d;
		cin >> n >> k;
		if(n==k) cout << n+1 << "\n";
		if(n>k) cout << k << "\n";
		if(n<k){
			a=n-1;
			d=k%a;
			if(d==0){
				ans = (k/a)*n-1;
			}
			else ans = (k/a)*n+d;
			cout << ans << "\n";
		}
	}
	gelo;
}