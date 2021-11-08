#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,i,ans=0;
    cin >> n >> h;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<=h) ans+=1;
        else ans+=2;
    }
    cout << ans << "\n";
    return 0;
}