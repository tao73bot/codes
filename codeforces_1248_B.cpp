#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x=0,y=0,ans;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n/2;i++){
        x += a[i];
    }
    for(i=n/2;i<n;i++){
        y +=a[i];
    }

    ans = x*x + y*y;

    cout << ans << endl;

    return 0;
}