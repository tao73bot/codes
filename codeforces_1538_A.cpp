#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,mx,mn,ans,x,y,d1,d2,d3;
	cin >> n;
	vector<int> v(n);
	for(i=0;i<n;i++){
		cin >> v[i];
		if(v[i]==n) x=i;
		if(v[i]==1) y=i;
	}
	d1=(min(y,(n-1-y)))+1;
	d2=(min(x,(n-1-x)))+1;
	mx=d1+d2;
	d3=fabs(x-y);
	d1=min(d1,d2);
	mn=d1+d3;
	cout << min(mn,mx) << "\n";
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