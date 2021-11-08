#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int ans,a,b,t=3;
	cin >> ans;
	while(t--)
	{
		cin >> a >> b;
		if(ans==a){
			ans=b;
		}
		if(ans==b){
			ans=a;
		}
	}
	cout << ans << "\n";
}

khela_shuru
{
//#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
//#endif
	SIS;
	solve();
	gelo;
}