#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i,x=1,mx=1;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	
	sort(a,a+n);
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]) x++;
		if(a[i]!=a[i+1]) x=1;
		mx=max(x,mx);
	}
	mx=max(mx,x);
	if(n%2==0&&mx<=(n/2)){
		cout << "YES\n";
	}
	else if(n%2==1&&mx<=(n/2)+1){
		cout << "YES\n";
	}
	else cout << "NO\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}