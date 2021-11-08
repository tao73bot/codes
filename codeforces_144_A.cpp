#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,mn=101,mx=0,idx1,idx2;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>mx){
            mx=a[i];
            idx1=i;
        }
        if(a[i]==mx){
            idx1=min(i,idx1);
        }
        if(a[i]<mn){
            mn=a[i];
            idx2=i;
        }
        if(a[i]==mn){
            idx2=max(i,idx2);
        }
    }
    //cout << mx << " " << mn << " " << idx1 << " " << idx2 <<"\n";
    if(idx1<idx2){
        cout << (n-1-idx2)+(idx1);
    }
    else cout << (n-1-idx2)+(idx1-1);
}
int main()
{
    solve();
    return 0;
}