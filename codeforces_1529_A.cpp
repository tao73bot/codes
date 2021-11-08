#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,i,avg,sum=0,ans=0;
	cin >> n;
	vector<int>a(n);
	set<int>s;
	for(i=0;i<n;i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	sort(a.begin(),a.end());
	
	if(s.size()>1){
		for(i=0;i<n;i++){
			if(a[i]>a[0]) ans++;
		}
		cout << ans << "\n";
	}
	else cout << "0\n";
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