#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    char ara[101][101];

    while (cin>>n>>m)
    {
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ara[i][j];
            }
        }

        bool a = 1;
        for(i=1;i<n;i++){
            for(j=0;j<m;j++){
                if(ara[i][j]==ara[i-1][j]){
                    a = 0;
                    break;
                }
            }
        }
    
        for(i=0;i<n;i++){
            for(j=1;j<m;j++){
                if(ara[i][j]!=ara[i][j-1]){
                    a = 0;
                    break;
                }
            }
        }

        if(a==1){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}