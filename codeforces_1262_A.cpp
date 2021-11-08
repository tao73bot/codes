#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i,ans=0,mn=1000000000,mx=0;
        cin >> n;
        long long a[n],b[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            cin >> b[i];
            mx=max(mx,a[i]);
            mn=min(mn,b[i]);
        }
        /*sort(a,a+n);
        sort(b,b+n);
        reverse(a,a+n);

        ans=max(ans,a[0]-b[0]);*/
        ans =max(mx-mn,ans);
        cout << ans << "\n";
    }
    return 0;
}