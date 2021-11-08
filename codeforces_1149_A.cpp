#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i,one=0,two=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==1) one++;
		if(a[i]==2) two++;
	}
	sort(a,a+n,greater<int>());
	if(one>0&&two>0){
		cout << 2 << " 1 ";
		for(i=1;i<n-1;i++){
			cout << a[i] << " ";
		}
	}
	else{
		for(i=0;i<n;i++){
			cout << a[i] << " ";
		}
	}
	cout << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}