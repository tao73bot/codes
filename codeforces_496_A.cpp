#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ans=1000,j,d;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++){
        cin >> a[i];
    }

    for(j=1;j<n-1;j++){
        int mx=0;
        for(i=1;i<n;i++){
            if(i==j){
                d=a[i+1]-a[i-1];
            }
            else{
                d=a[i]-a[i-1];
            }
            mx=max(d,mx);
        }
        ans=min(ans,mx);
    }

    cout << ans << "\n";

    return 0;
}