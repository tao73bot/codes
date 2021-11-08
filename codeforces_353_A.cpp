#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
void solve()
{
	int n,odd=0,i,sum1=0,sum2=0,x=0;
	cin >> n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
		if((a[i]%2==1&&b[i]%2==0)||(a[i]%2==0&&b[i]%2==1)) odd++;
		sum2+=b[i];
		sum1+=a[i];
	}
	if(sum2%2==0&&sum1%2==0){
		cout << "0\n";
	}
	else{
		if(odd%2==0&&odd!=0){
			cout << "1\n";
		}
		else cout << "-1\n";
	}
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}