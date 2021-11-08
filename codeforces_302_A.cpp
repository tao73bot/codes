#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
#define ld long double
 
void solve()
{
	int n,m,i,a=0,b=0;
	cin >> n >> m;
	int aa[n];
	for(i=0;i<n;i++){
		cin >> aa[i];
		if(aa[i]==1) a++;
		else b++;
	}
	for(i=0;i<m;i++){
		int l,r;
		cin >> l >> r;
		int x=r-l+1;
		if(x%2==0&&(a>=x/2)&&(b>=x/2)) cout << "1\n";
		else cout << "0\n";
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}