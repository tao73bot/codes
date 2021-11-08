#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
vector<int> v;
 
void solve()
{
	int n,x,i,sum=0,s=0,b=-1;
	cin >> n >> x;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
	}
	if(s==x){
		cout << "NO\n";
	}
	else if(s<x){
		cout << "YES\n";
		for(i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	else if(s>x){
		cout << "YES\n";
		for(i=0;i<n;i++){
			sum+=a[i];
			if(sum==x){
				b=i;
			}
		}
		if(b==-1){
			for (i=0;i<n;++i)
			{
				cout << a[i] << " ";
			}
		}
		if(b>=0){
			for(i=0;i<n;i++){
				if(i==b){
					cout << a[i+1] << " ";
					i++;
				}
				if(i-b==1){
					cout << a[b] << " ";
				}
				else cout << a[i] << " ";
			}
		}
		cout << "\n";
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