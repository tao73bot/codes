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
		ll n,i,ans=-1;
        cin >> n;
        vector<ll> cnt(n+1),idx(n+1);
        for(i=0;i<n;i++){
            ll a;
            cin >> a;
            ++cnt[a];
            idx[a]=i+1;
        }
        for(i=0;i<=n;++i){
            if(cnt[i]==1){
                ans=idx[i];
                break;
            }
        }
        cout << ans << "\n";
	}
	gelo;
}