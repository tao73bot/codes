#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,ans=0,x=1,k;
    cin >> n >> m;
    int a[m];
    for(i=0;i<m;i++){
        cin >> a[i];
        if(x<=a[i]){
            k=a[i]-x;
        }
        if(x>a[i]){
            k=(n-x)+a[i];
        }
        ans+=k;
        x=a[i];
    }
    cout << ans << "\n";
    return 0;
}