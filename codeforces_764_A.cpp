#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z,i,j,ans=0;
    cin >> n >> m >> z;
    for(i=n;i<=z;i=i+n){
        for(j=m;j<=z;j=j+m){
            if(i==j){
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}