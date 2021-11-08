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
		int n,i,cnt=0,x;
		cin >> n;
		int a[n],b[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		x=a[0];
		for(i=0;i<n;i++){
			if(x==a[i])cnt++;
		}
		for(i=0;i<n;i++){
			if(cnt==1){
				cout << "1\n";
                break;
			}
			else{
				if(x!=a[i]){
					cout << i+1 << "\n";
					break;
				}
			}
		}
	}
	gelo;
}