#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,a=0,b=0,c,d;
	cin >> n;
	int x[n];
	for(int i=0;i<n;i++){
		cin >> x[i];
		if(x[i]%2==0){
			a++;
			d=i+1;
		}
		if(x[i]%2==1){
			b++;
			c=i+1;
		}
	}
	if(a==1) cout << d << "\n";
	else cout << c << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}