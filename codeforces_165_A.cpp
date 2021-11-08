#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i,j,cnt=0,d,d1,d2,d3;
	cin >> n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(i=0;i<n;i++){
		d=d1=d2=d3=0;
		for(j=0;j<n;j++){
			if(a[i]>a[j]&&b[i]==b[j]) d++;
			if(a[i]<a[j]&&b[i]==b[j]) d1++;
			if(a[i]==a[j]&&b[i]>b[j]) d2++;
			if(a[i]==a[j]&&b[i]<b[j]) d3++;
		}
		if(d>0&&d1>0&&d2>0&&d3>0) cnt++;
	}
	cout << cnt << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}