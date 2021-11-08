#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,w,r,i,flag;
	    cin >> n >> w >> r;
	    ll a[n];
	    for(i=0;i<n;i++){
		    cin >> a[i];
	    }
	    if(w<=r){
		    cout << "YES\n";
		    continue;
	    }
	    else{
		    flag=0;
		    sort(a,a+n);
		    for(i=0;i<n;i++){
			    if(a[i]==a[i+1]){
				    i++;
				    r+=(2*a[i]);
			    }
			    if(r>=w){
				    flag=1;
				    break;
			    }
		    }
		    if(flag==1) cout << "YES\n";
		    else cout << "NO\n";
	    }
	}
	gelo;
}