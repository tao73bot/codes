#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll n,i,d,x,l;
	cin >> n;
	l=2*n;
	ll a[l],b[l];
	for(i=0;i<l;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(a,a+l);
	sort(b,b+l,greater<ll>());
	d=x=0;
	for(i=0;i<l;i++){
		if(i%2==0){
			cout << a[x] << " ";
			x++;
		}
		else{
			cout << b[d] << " ";
			d++;
		}
	}
	cout << "\n";
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