#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,a,b,c,ans=0,d,i,j,k;
	cin >> n >> a >> b >> c;
 
	for(i=0;i*a<=n;i++){
		for(j=0;i*a+j*b<=n;j++){
			// k=(n-(a*i+b*j))/c;
			// if(i*a+j*b+k*c==n){
			// 	ans=max(i+j+k,ans);
			// }
			if((n-(i*a+j*b))%c==0){
				k=(n-(a*i+b*j))/c;
				ans=max(i+j+k,ans);
			}
		}
	}
	cout << ans << "\n";
}
 
khela_shuru
{
	solve();
	gelo;
}