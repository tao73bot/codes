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
		ll n,m,x,ans;
        cin >> n >> m >> x;
        ll c,r;
        if(x%n==0){
            c=x/n;
            r=n;
        }
        if(x%n!=0){
            c=(x/n)+1;
            r=x%n;
        }
        ans = m*(r-1)+c;
        cout << ans << "\n";
	}
	gelo;
}