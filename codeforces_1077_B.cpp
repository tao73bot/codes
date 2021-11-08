#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,ans=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=1;i<n-1;i++){
		if(a[i]==0){
			if(a[i-1]==1&&a[i+1]==1){
				a[i+1]=0;
				ans++;
			}
		}
	}
	cout << ans << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}