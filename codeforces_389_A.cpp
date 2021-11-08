#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
 
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
 
void solve()
{
	int n,i,ans;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	ans=gcd(a[0],a[1]);
	for(i=2;i<n;i++){
		ans=gcd(a[i],ans);
	}
	cout << ans*n << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}