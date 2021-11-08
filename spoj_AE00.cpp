#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    int i,sr,r=1;
    sr=sqrt(n);
    for(i=2;i<=sr;i++){
        if(n%i==0){
            r++;
        }
    }
    return r;
}

int main()
{
    int i,n,ans=0;
    cin >> n;
    for(i=1;i<=n;i++){
        ans+=rec(i);
    }
    cout << ans << "\n";
    return 0;
}