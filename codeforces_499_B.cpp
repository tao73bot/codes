#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,m,i,j;
	cin >> n >> m;
	string s;
	std::vector<string> v(m),a(m),b(m);
	for(i=0;i<m;i++){
		cin >> a[i] >> b[i];
		if(a[i].size()<=b[i].size()) v[i]=a[i];
		else v[i]=b[i];
	}
	for(i=0;i<n;i++){
		cin >> s;
		for(j=0;j<m;j++){
			if(a[j]==s){
				cout << v[j] << " ";
			}
		}
	}
	cout << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}