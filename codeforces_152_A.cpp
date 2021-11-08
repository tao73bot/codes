#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,m,i,j,mx;
	cin >> n >> m;
	int a[m];
	set<int> x;
	char s[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> s[i][j];
		}
	}
	for(i=0;i<m;i++){
		j=0;
		mx=0;
		while(j<n)
		{
			mx=max(mx,s[j][i]-'0');
			j++;
		}
		a[i]=mx;
	}
	for(i=0;i<m;i++){
		j=0;
		while(j<n){
			if(s[j][i]-'0'==a[i]){
				x.insert(j);
			}
			j++;
		}
	}
	cout << x.size() << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}