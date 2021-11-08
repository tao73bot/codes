#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k,i,ans;
        cin >> n >> k;
        ans=n;

        for(i=1;i*i<=n;i++){
            if(n%i==0&&i<=k){
                ans=min(ans,n/i);
            }
            if(n%i==0&&n/i<=k){
                ans=min(ans,i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}