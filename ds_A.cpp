#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m,i,j,sum=0,ans=0;
    cin >> n >> m;
    long long a[n],b[m];
    for(i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(i=0;i<m;i++){
        cin >> b[i];
        ans+=(b[i]*sum);
    }
    cout << ans << "\n";

    return 0;
}