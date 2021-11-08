#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long r,c,mx1=0,mn1=1000000000000000000,mx2=0,mn2=1000000000000000000,i,j;
        cin >> r >> c;
        long long a[r][c];

        for(i=0;i<r;i++){
            long long s=0;
            for(j=0;j<c;j++){
                cin >> a[i][j];
                s+=a[i][j];
            }
            mx1=max(mx1,s);
            mn1=min(mn1,s);
        }
        for(i=0;i<r;i++){
            long long s=0;
            for(j=0;j<c;j++){
                s+=a[j][i];
            }
            mx2=max(mx2,s);
            mn2=min(mn2,s);
        }

        cout << max(mx1,mx2)-min(mn1,mn2) << "\n";
    }
    return 0;
}