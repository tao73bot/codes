#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,ans=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);

    for(i=1;i<n;i++){
        while(a[i]<=a[i-1]){
            a[i]++;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}