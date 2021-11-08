#include <bits/stdc++.h>
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,i,d;
		cin >> n >> k;

		for(i=0;i<n;i++){
			if(i<k){
				cout << "a";
			}
			else if(i>=k){
				d=i-k;
				if(d%3==0) cout << "c";
				if(d%3==1) cout << "b";
				else if(d%3==2) cout << "a";
			}
		}
		cout << "\n";
	}
	return 0;
}