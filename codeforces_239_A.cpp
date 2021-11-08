#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll a,k,n,i;
	cin >> a >> k >> n;
	if((a/k)>=(n/k)){
		cout << "-1\n";
	}
	else{
		if(a%k==0){
			i=k;
		}
		else{
			i=((a/k)+1)*k-a;
		}
		while(i+a<=n){
			cout << i << " ";
			i+=k;
		}
		cout << "\n";
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}