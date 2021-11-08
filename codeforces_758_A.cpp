#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0,d=0,ans;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        d = max(d,a[i]);
        sum+=a[i];
    }
    
    ans = n*d - sum;
    cout << ans << endl;

    return 0;
}