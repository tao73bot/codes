#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,j,k=0,cnt=0,f=1;
	cin >> n;
	char s[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> s[i][j];
			if(s[i][j]=='o') k++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i+1][j]=='o'&&(i+1<=n-1)&&j<n) cnt++;
			if(s[i-1][j]=='o'&&(i-1>=0)&&j<n) cnt++;
			if(s[i][j+1]=='o'&&(i<n)&&(j+1<=n-1)) cnt++;
			if(s[i][j-1]=='o'&&i<n&&(j-1>=0)) cnt++;
			if(cnt%2==1){
				f=0;
				break;
			}
		}
		if(!f){
			break;
		}
	}
	if(f) cout << "YES\n";
	else cout << "NO\n";
}

khela_shuru
{
	solve();
	gelo;
}