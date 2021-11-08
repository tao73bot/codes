#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
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
		ll n,i,sum=0,odd=0,x=0;
		cin >> n;
		ll a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
			if(a[i]%2==1) odd++;
			if(a[i]==2) x++;
		}
		if(sum%2==0){
			cout << "0\n";
		}
		else{
			if(n==odd){
				cout << "-1\n";
			}
			else{
				if(x>0){
					cout << "1\n";
				}
				else cout << "-1\n";
			}
		}
	}
	gelo;
}