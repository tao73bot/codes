#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
void solve()
{
	ll n,m,i,d=0;
	cin >> n >> m;
	vector<ll> a(n);
	for(i=0;i<n;i++){
		ll c,t;
		cin >> c >> t;
		d=d+(c*t);
		//cout << d << "\n";
		a[i]=d;
	}
	/*for(i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";*/
	for(i=0;i<m;i++){
		ll x;
		cin >> x;
		auto it=lower_bound(a.begin(),a.end(),x)-a.begin()+1;
		cout << it << "\n";
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}