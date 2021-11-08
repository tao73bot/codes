#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int i,j,ans;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin >> a[i][j];

            if(a[i][j]==1){
                ans=fabs(2-i)+fabs(2-j);
            }
        }
    }
    cout << ans << "\n";

    return 0;
}