#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i,j;
        cin >> n;
        int a[n][n];
        if(n%2==0){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i==j||j==n-i-1){
                        a[i][j]=1;
                        cout << a[i][j] <<" ";
                    }
                    else{
                        cout << 0 << " ";
                    }
                }
                cout << "\n";
            }
            cout << "\n";
        }
        else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i==j||j==n-i-1||(i==(n/2)&&j==0)||j==(n/2)&&i==0){
                        a[i][j]=1;
                        cout << a[i][j] << " ";
                    }
                    else{
                        a[i][j]=0;
                        cout << a[i][j] << " ";
                    }
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
    return 0;
}