#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,cnt=0,ans=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n-1;i++){
            if(a[i+1]==a[i]){
                cnt++;
                ans=max(ans,cnt);
            }
            if(a[i+1]>a[i]) cnt=0;
        }
        cout << ans+1 << "\n";
    }
    return 0;
}