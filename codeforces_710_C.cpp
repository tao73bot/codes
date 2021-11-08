#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

int a[50][50];
void solve()
{
	int n, i, j,e=2,o=1;
	cin >> n;
	for(i=0;i<n;i++){
		if(i<=n/2){
			for(j=n/2-i;j<=n/2+i;j++){
				a[i][j]=1;
			}
		}
		else{
			for(j=i-n/2;j<=3*(n/2)-i;j++){
				a[i][j]=1;
			}
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==1){
				cout << o << " ";
				o+=2;
			}
			else{
				cout << e << " ";
				e+=2;
			}
		}
		cout << "\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}