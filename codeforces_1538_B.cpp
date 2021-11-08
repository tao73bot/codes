#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,i,k=0,sum=0,x;
	cin >> n;
	vector<ll> v(n);
	set<ll> s;
	for(i=0;i<n;i++){
		cin >> v[i];
		sum+=v[i];
		s.insert(v[i]);
	}
	x=sum/n;
	if(s.size()==1){
		cout << "0\n";
	}
	else{
		if(sum%n!=0){
			cout << "-1\n";
		}
		else{
			for(i=0;i<n;i++){
				if(v[i]>x){
					k++;
				}
			}
			cout << k << "\n";
		}
	}
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