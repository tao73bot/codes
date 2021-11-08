#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,d,sum=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	d=(n/2)+1;
	for(i=0;i<d;i++){
		sum+=((a[i]/2)+1);
	}
	cout << sum << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}