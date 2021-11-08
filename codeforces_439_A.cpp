#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,d,i,ans,sum=0;
	cin >> n >> d;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	if((d-sum)>=(n-1)*10){
		cout << (d-sum)/5 << "\n";
	}
	else cout << "-1\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}