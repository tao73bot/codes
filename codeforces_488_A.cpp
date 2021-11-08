#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	ll a,b,i,f=0;
	cin >> a;
 
	for(i=1;i<=20;i++){
		a++;
		if(a<0){
			b=a*-1;
		}
		else b=a;
		while(b!=0){
			if(b%10==8){
				f=1;
				break;
			}
			b/=10;
		}
		if(f==1){
			cout << i << "\n";
			return;
		}
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}