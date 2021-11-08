#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
void solve()
{
	int n,i,ans,mn=1e6;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		mn=min(mn,a[i]);
	}
	if(mn==1){
		cout << "-1\n";
	}
	else cout << "1\n"; 
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}