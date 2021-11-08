#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i,a=0,b=0,k=0;
	cin >> n;
	string s;
	cin >> s;
	for(i=0;i<n;i++){
		if(s[i]=='T') a++;
		if(s[i]=='M') b++;
		if(b>a){
			cout << "NO\n";
			return;
		}
	}
	a=b=0;
	for(i=n-1;i>=0;i--){
		if(s[i]=='T') a++;
		if(s[i]=='M') b++;
		if(b>a){
			cout << "NO\n";
			return;
		}
	}
	if(a==2*b){
		cout << "YES\n";
	}
	else cout << "NO\n";
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