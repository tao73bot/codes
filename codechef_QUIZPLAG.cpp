#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,m,k,i,cnt,ans=0;
	cin >> n >> m >> k;
	int a[k];
	for(i=0;i<k;i++){
		cin >> a[i];
	}
	sort(a,a+k);
	set<int> s;
	cnt=0;
	for(i=0;i<k-1;i++){
		if(a[i]==a[i+1]&&a[i]<=n){
			s.insert(a[i]);
		}
		if(a[i]>n) break;
	}
	cout << s.size() << " ";
	for(auto it=s.begin();it!=s.end();it++){
		cout << *it << " ";
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