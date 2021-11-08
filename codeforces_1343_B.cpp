#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	ll n,i,a=0,b=-1,s1=0,s2=0;
	cin >> n;
	if((n/2)%2==1){
		cout << "NO\n";
	}
	if((n/2)%2==0){
		cout << "YES\n";
		for(i=1;i<=n/2;i++){
			a+=2;
			cout << a << " ";
			s1+=a;
		}
		for(i=(n/2)+1;i<n;i++){
			b+=2;
			cout << b << " ";
			s2+=b;
		}
		cout << s1-s2 << "\n";
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