#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
    SIS;
    ll n,k,cnt=0;
    cin >> n >> k;
    while(n--)
    {
        ll a;
        cin >> a;
        if(a%k==0) cnt++;
    }
    cout << cnt << "\n";
    gelo;
}