#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	int n,i;
	cin >> n;
 
	if(n%2==0){
		for(i=1;i<=n;i++){
			cout << (i%2==0 ? i-1 : i+1) << " ";
		}
	}
	else{
		cout << "3 1 2 ";
		for(i=4;i<=n;i++){
			cout << (i%2==0 ? i+1 : i-1) << " ";
		}
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