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
        long long n,i,ans;
        cin >> n;
        long long a[n],b[n];
        for(i=0;i<n;i++){
            cin >> a[i] >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        if(n%2==1){
            ans=1;
        }
        else{
            ans=(a[n/2]-a[(n/2)-1]+1)*(b[n/2]-b[(n/2)-1]+1);
        }
        cout << ans << "\n";
    }
    return 0;
}