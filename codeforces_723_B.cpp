#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n,i,a=0,b=0,mx=0;
	bool f=true;
	cin >> n;
	string s;
	cin >> s;
	for(i=0;i<n;i++){
		if(f==true&&isalpha(s[i])) a++;
		else if(f==true&&s[i]=='_'){
			a=0;
		}
		else if(f==true&&s[i]=='('){
			a=0;
			f=false;
		}
		else if(f==false&&s[i]=='_'&&isalpha(s[i-1])){
			b++;
		}
		else if(s[i]==')'&&f==false){
			f=true;
			if(isalpha(s[i-1])) b++;
		}
		mx=max(mx,a);
	}
	cout << mx << " " << b << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}