#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t,c=0;
	cin >> t;
	while(t--)
	{
		ll n,p,q,cnt=0,i,sum=0;
        cin >> n >> p >> q;
        ll a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum>q||cnt>=p){
                break;
            }
            cnt++;
        }
        cout <<"Case " << ++c << ": "<< cnt << "\n";
	}
	gelo;
}