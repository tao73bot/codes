#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,i;
	cin >> n;
	string a,b;
	cin >> a;
	b="1";
	for(i=1;i<n;i++){
		if('1'+a[i]!=(b[i-1]+a[i-1])){
			b+='1';
		}
		else b+='0';
	}
	cout << b << "\n";
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