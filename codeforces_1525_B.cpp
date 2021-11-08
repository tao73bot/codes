#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,f=0,mx=0,mn=50,idx1,idx2;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>a[i+1]&&i<n-1){
			f=1;
		}
		if(a[i]>mx){
			mx=a[i];
			idx1=i;
		}
		if(a[i]<mn){
			mn=a[i];
			idx2=i;
		}
	}
	if(f==0){
		cout << "0\n";
	}
	else if(f==1){
		if(idx2==0||idx1==n-1){
			cout << "1\n";
		}
		else if(idx2==n-1&&idx1==0){
			cout << "3\n";
		}
		else cout << "2\n";
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