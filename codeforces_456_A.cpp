#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,x,aa=0,i,mx=0,mx1=0;
	cin >> n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
		mx=max(a[i],mx);
		mx1=max(b[i],mx1);
	}
	for(i=0;i<n-1;i++){
		x=a[i];
		if((a[i]==mx&&b[i]!=mx1)||(a[i]!=mx&&b[i]==mx1)){
			break;
		}
		if(x>a[i+1]&&b[i]>b[i+1]){
			aa++;
		}
		if(x<a[i+1]&&b[i]<b[i+1]){
			aa++;
		}
	}
	if(aa==n-1){
		cout << "Poor Alex\n";
	}
	else cout << "Happy Alex\n";
}
 
khela_shuru
{
    SIS;
	solve();
	gelo;
}