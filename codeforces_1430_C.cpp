#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n,i=2,d,x;
	cin >> n;
	cout << 2 << "\n";
	cout << n << " " << n-1 << "\n";
	d=ceil((2*n+1)/2);
	x=n;
	x-=2;
	while(x--)
	{
		cout << d << " " << n-i << "\n";
		d=ceil(d+n-i)/2;
		i++;
	}
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