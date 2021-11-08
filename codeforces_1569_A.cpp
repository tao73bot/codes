#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i,a,b,f=0,j;
	cin >> n;
	string s;
	cin >> s;
	for(i=0;i<n-1;i++){
		a=b=0;
		for(j=i;j<n;j++){
			if(s[j]=='a') a++;
			if(s[j]=='b') b++;
			if(a==b&&a>0){
				f=1;
				break;
			}
		}
		if(f==1){
			cout << i+1 << " " << j+1 << "\n";
			break;
		}
	}
	if(f==0) cout << "-1 -1\n";
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