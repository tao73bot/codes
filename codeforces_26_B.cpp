#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll ans=0,l,i;
	string s;
	cin >> s;
	l=s.size();

	for(i=0;i<s.size();i++){
		if(s[i]=='(') ans++;
		else if(s[i]==')'){
			ans--;
			if(ans<0){
				l--;
				ans=0;
			}
		}
	}
	cout << l-ans << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}