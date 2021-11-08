#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int k,cnt,i,j,mx=0;
	cin >> k;
	char a[4][4];
	for(i=0;i<4;i++){
		cnt=0;
		for(j=0;j<4;j++){
			cin >> a[i][j];
		}
	}
	for(int x=1;x<=9;x++){
		cnt=0;
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(a[i][j]-48==x) cnt++;
			}
		}
		mx=max(mx,cnt);
	}
	cout << (mx<=2*k ? "YES\n" : "NO\n");
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}