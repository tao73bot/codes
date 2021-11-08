#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,ans=0;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[k-1]<=a[i] && a[i]>0){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}