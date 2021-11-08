#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,k,mx=0,i,f=0;
		cin >> n >> k;
		string s;
		cin >> s;
		for(i=0;i<n;i++){
			if(s[i]=='*') f++;
			if(s[i]!='*') f=0;
			mx=max(mx,f);
		}
		if(mx>=k) cout << "YES\n";
		else cout << "NO\n";
	}
	gelo;
}