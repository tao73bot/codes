#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
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
	 	ll n,x,mx=0;
	 	cin >> n >> x;
	 	while(n--)
	 	{
	 		ll s,r;
	 		cin >> s >> r;
	 		if(s<=x){
	 		    mx=max(mx,r);
	        }
	    }
	    cout << mx << "\n";
	}	
	gelo;
}