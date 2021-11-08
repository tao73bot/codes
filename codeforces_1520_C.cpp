#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n,i,j,a;
	cin >> n;
	int x[n][n];
	if(n==1){
		cout << "1\n";
	}
	else if(n==2){
		cout << "-1\n";
	}
	else{
		a=1;
		for(i=0;i<n;i++,a++){
			x[i][i]=a;
		}
		for(i=1;i<n;i++){
			for(j=0;j<i;j++,a+=2){
				x[i][j]=a;
				x[j][i]=a+1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout << x[i][j] << " ";
			}
			cout << "\n";
		}
	}
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