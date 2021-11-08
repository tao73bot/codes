#include <bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n,m,i,j,cnt=0,mx;
	cin >> n >> m;
	mx=max(n,m);

	for(i=0;i*i<=mx;i++){
		for(j=0;j*j<=mx;j++){
			if(i*i+j==n&&j*j+i==m) cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}