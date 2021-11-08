#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int r,c,ans=0,cnt=0,i,j,k;
	cin >> r >> c;
	char s[11][11];
	for(i=0;i<r;i++){
		k=0;
		for(j=0;j<c;j++){
			cin >> s[i][j];
			if(s[i][j]!='S'){
				k++;
			}
		}
		if(k==c){
			ans+=c;
			cnt++;
		}
	}
	for(i=0;i<c;i++){
		k=0;
		for(j=0;j<r;j++){
			if(s[j][i]!='S') k++;
		}
		if(k==r){
			ans+=(r-cnt);
		}
	}
	cout << ans << "\n";
}

khela_shuru
{
    SIS;
	solve();
	gelo;
}