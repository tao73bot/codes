#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,flag=1,i,j,cnt=0;
	cin >> n;
	char s[n][n],x,y;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> s[i][j];
		}
	}
	x=s[0][0];
	y=s[1][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(x==s[i][j]) cnt++;
			if(i==j&&(s[i][j]!=s[i][n-i-1])||(x!=s[n/2][n/2])){
				flag=0;
			}
			if((i!=j&&j!=n-i-1)&&(y!=s[i][j])){
				flag=0;
			}
		}
	}
	if(cnt>=2*n) flag=0;
	if(flag==0) cout << "NO\n";
	else cout << "YES\n";
    /*int n,i,j;
	cin >> n;
	char a[n][n],x,y;
	set<char> s,s1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				s.insert(a[i][j]);
				s.insert(a[i][n-i-1]);
				x=a[i][j];
			}
			if(i!=j&&j!=n-i-1){
				s1.insert(a[i][j]);
				s1.insert(a[i][n-j-1]);
				y=a[i][j];
			}
		}
	}
	if(s.size()==1&&s1.size()==1&&x!=y){
		cout << "YES\n";
	}
	else cout << "NO\n";*/
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}