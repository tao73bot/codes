#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,k,x,cnt;
		cin >> n >> k;
		k--;
		if(n%2==0){
			cnt=k%n;
			cout << cnt+1 << "\n";
		}
		else{
			x=(n/2);
			cnt=(k+(k/x))%n;
			cout << cnt+1 << "\n";
		}
	}
	gelo;
}