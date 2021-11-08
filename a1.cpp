#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    llu n,i,ans=1;
    cin >> n;
    llu a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==0){
            cout << "0\n";
            return 0;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>1000000000000000000/ans){
            cout << "-1\n";
            return 0;
        }
        ans*=a[i];
    }
    cout << ans << "\n";
    return 0;
}