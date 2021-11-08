#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,x,i,b;
	cin >> n >> x;
	ll a[n];
	set<ll> s;
	for(i=0;i<n;i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	b=s.size();
	n=n-x;
	//cout << n << "\n";
	if(b>=n){
		cout << n << "\n";
	}
	else cout << b << "\n";
}

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	gelo;
}