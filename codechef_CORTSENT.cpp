#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,cnt=0,d;
	cin >> n;
	d=n;
	string s;
	while(n--){
		cin >> s;
		int x=0;
		if(s[0]>='a'&&s[0]<='m'){
			for(i=0;i<s.size();i++){
				if(s[i]>='a'&&s[i]<='m') x++;
			}
			if(x==s.size()) cnt++;
		}
		if(s[0]>='N'&&s[0]<='Z'){
			for(i=0;i<s.size();i++){
				if(s[i]>='N'&&s[i]<='Z') x++;
			}
			if(x==s.size()) cnt++;
		}
	}
	cout << (cnt==d ? "YES\n" : "NO\n");
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