#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,x=0,y=0;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<=k){
            x++;
        }
        else
        {
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(a[i]<=k){
            y++;
        }
        else
        {
            break;
        }
    }

    if(x+y>=n){
        cout << n << endl;
    }
    else
    {
        cout << x+y << endl;
    }

    return 0;
}