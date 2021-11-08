#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m,i,j,k,cnt=0;
    cin>>n>>m;
    long long a[n], b[m];
    for(i=0;i<n;i++){
        cin>>a[i];
    }    
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    for(i=0;i<=n-m+1;i++) {
        bool f=0;
        for(j=0,k=i;j<m&&k<n;j++,k++) {
            if(a[k]!=b[j]){
                f=1;
                break;
            }
        }
        if(f==0&&j==m) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}