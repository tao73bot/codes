#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,k,i,cnt=0;
	cin >> n >> k;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	while(k--){
		for(i=0;i<n-1;i++){
			if(a[i]>0){
				a[i]--;
				a[n-1]++;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
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