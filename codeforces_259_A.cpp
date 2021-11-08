#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int a,b=0,i,j;
	char s[8][8];
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			cin >> s[i][j];
		}
	}
	for(i=0;i<8;i++){
		j=a=0;
		while(j<7){
			if(s[i][j]==s[i][j+1]) a++;
			j++;
		}
		if(a>0){
			b=1;
		}
	}
	if(b==0) cout << "YES\n";
	else cout << "NO\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}