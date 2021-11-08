#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	ll n,i,sum=0,d,cnt=0;
	cin >> n;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
	}
	d=sum/n;
	for(i=0;i<n-1;i++){
		if(a[i]==d) cnt++;
		else if(a[i]>d)
		{
			a[i+1]+=(a[i]-d);
			a[i]=d;
			cnt++;
		}
		else{
			a[i+1]-=(d-a[i]);
			a[i]==d;
			cnt++;
		}
	}
	if(a[n-1]==d) cnt++;

	cout << cnt << "\n";
	gelo;
}