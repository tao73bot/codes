#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
void solve()
{
	int n,cnt=0,p,f=0;
	char ch;
	cin >> n >> ch;
	string s;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s[i]==ch) cnt++;
		if(s[i]==ch&&i>=(n/2)){
			f=1;
			p=i;
		}
	}
	//cout << cnt << "\n";
	if(cnt==n) cout << "0\n";
	else{
		if(f){
			cout << "1\n";
			cout << p+1 << "\n";
		}
		else{
			cout << "2\n";
			cout << n-1 << " " << n << "\n";
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