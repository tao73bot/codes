#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,v,i,d,ans=0;
	cin >> n >> v;
	int a[51],b[51];
	vector<int> c;
	for(i=0;i<n;i++){
		cin >> a[i];
		d=a[i];
		int j=0;
		int x=0;
		while(d--){
			cin >> b[j];
			if(b[j]<v) x++;
			j++;
		}
		if(x>0){
			ans++;
			c.push_back(i+1);
		}
	}
	cout << ans << "\n";
	for(i=0;i<ans;i++){
		cout << c[i] << " ";
	}
	cout << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}