#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,a=0,b=0,i,j;
	cin >> n;
	vector<int>v;
	string s,x[n][n];
	cin >> s;
	for(i=0;i<n;i++){
		if(s[i]=='2'){
			a++;
			v.push_back(i);
		}
	}
	if(a==2||a==1){
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
		for(i=0;i<n;i++) for(j=0;j<n;j++) x[i][j]='=';
		for(i=0;i<a;i++){
			j=v[(i+1)%a];
			x[v[i]][j]='+';
			x[j][v[i]]='-';
		}
		for(i=0;i<n;i++) x[i][i]='X';
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout << x[i][j];
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