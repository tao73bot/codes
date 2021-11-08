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
        ll x,r,m,ans;
        cin >> x >> r >> m;
        r*=60;
        m*=60;
        ans=min(x,r);
        if(ans<r){
            ans+=2*(r-x);
        }
        if(ans<=m){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
	gelo;
}