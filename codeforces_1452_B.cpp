#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,sum=0,i,mx=0,ans;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++){
        	cin >> a[i];
        	mx=max(mx,a[i]);
        	sum+=a[i];
        }
        if(sum%(n-1)==0)
        {
        	ans=sum/(n-1);
        }
        else ans=(sum/(n-1))+1;
        if(mx>ans){
        	ans=(n-1)*mx;
        }
        else ans*=(n-1);
        cout << ans-sum << "\n";
    }
	return 0;
}