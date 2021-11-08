#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
#define pb push_back
vector<ll> a,b;

void solve()
{
	a.pb(1);
	b.pb(0);
	ll x=1,i;
	for(i=1;i<=33;i++){
		x*=2;
		a.pb(x);
		b.pb(x);
	}
}

khela_shuru
{
	SIS;
	solve();
	int t;
	cin >> t;
	while(t--)
	{
		ll n,aa,ab,i,j,mn=1e9;
		cin >> n;

		for(i=0;i<33;i++){
			for(j=i+1;j<=33;j++){
				aa=a[i];
				ab=b[j];
				ll d=fabs(n-(aa+ab));
				mn=min(mn,d);
			}
		}
		cout << mn << "\n";
	}
	gelo;
}