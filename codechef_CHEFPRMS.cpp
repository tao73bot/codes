#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
#define pb push_back
set<ll> s;
vector<ll> b;
vector<ll>v={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void solve()
{
    ll i,j,a,l;
    l=v.size();
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            a=v[i]*v[j];
            s.insert(a);
            b.pb(a);
        }
    }
}

khela_shuru
{
    solve();
	SIS;
	int t,l;
    l=b.size();
	cin >> t;
	while(t--)
	{
		ll n,i,x,cnt=0;
        cin >> n;
        for(i=0;i<l;i++){
            x=n-b[i];
            if(s.count(x)==1){
                cout << "YES\n";
                break;
            }
            cnt++;
        }
        if(cnt==l) cout << "NO\n";
	}
	gelo;
}