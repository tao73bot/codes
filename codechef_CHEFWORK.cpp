#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans;
    scanf("%d",&n);
    int c[n],t[n];
    int a[3]={100001,100001,100001};

    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&t[i]);
    }

    for(int i=0;i<n;i++){
        a[t[i]-1]=min(a[t[i]-1],c[i]);
    }
    ans=min(a[0]+a[1],a[2]);

    cout << ans << "\n";

    return 0;
}