#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,a=0,b=0,c=0,i,mx=0;
	cin >> n;
	int x[n];
	for(i=0;i<n;i++){
		cin >> x[i];
		if(i%3==0) a+=x[i];
		mx=max(mx,a);
		if(i%3==1) b+=x[i];
		mx=max(mx,b);
		if(i%3==2) c+=x[i]; 
		mx=max(mx,c);
	}
	if(a==mx) cout << "chest\n";
	if(b==mx) cout << "biceps\n";
	if(c==mx) cout << "back\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}