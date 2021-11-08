#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,a,x=0;
		cin >> n;
		i=0;
		while(x<n){
			i++;
			x+=i;
		}
		a=x-n;
		if(a>1){
			cout << i << "\n";
		}
		else{
			cout << i+a << "\n";
		}
	}
	gelo;
}