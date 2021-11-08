#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,s=0,ans=0,i,j,mn=100,b;
        cin >> n >> m;
        int a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> a[i][j];
                ans+=fabs(a[i][j]);
                b=fabs(a[i][j]);
                mn=min(mn,b);
                if(a[i][j]<0) s++;
            }
        }
        if(s%2==0){
            cout << ans << "\n";
        }
        else{
            cout << ans-2*mn << "\n";
        }
    }
    return 0;
}