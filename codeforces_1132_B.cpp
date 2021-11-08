#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

khela_shuru
{
	SIS;
	ll n,m,i,x,sum=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<ll>());
    cin >> m;
    while(m--){
        cin >> x;
        cout << sum-a[x-1] << "\n";
    }
	gelo;
}