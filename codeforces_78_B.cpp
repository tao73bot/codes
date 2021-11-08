#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
void solve()
{
	int n,i,d;
	cin >> n;
	
	if(n%7==0){
		for(i=0;i<n/7;i++){
			cout << "ROYGBIV";
		}
	}
	if(n%7!=0){
		for(i=0;i<n/7;i++){
			cout << "ROYGBIV";
		}
		if(n%7==1) cout << "G";
		if(n%7==2) cout << "GB";
		if(n%7==3) cout << "YGB";
		if(n%7==4) cout << "YGBI";
		if(n%7==5) cout << "OYGBI";
		if(n%7==6) cout << "OYGBIV";
	}
	cout << "\n";
}
 
khela_shuru
{
	solve();
	gelo;
}