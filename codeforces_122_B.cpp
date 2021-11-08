#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int a=0,b=0,i;
	string s;
	cin >> s;
	for(i=0;i<s.size();i++){
		if(s[i]-'0'==4) a++;
		if(s[i]-'0'==7) b++;
	}
	if(a==0&&b==0) cout << "-1\n";
	else{
		if(a>=b) cout << "4\n";
		else cout << "7\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}