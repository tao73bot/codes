#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,d=0,i,x,y;
    int a[1001];
    cin >> n;

    for(i=0;i<n;i++){
        cin >> a[i];
    }
    x=0;
    y=n-1;

    for(i=0;i<n;i++){
        if(i%2==0){
            if(a[x]>a[y]){
                s+=a[x];
                x++;
            }
            else{
                s+=a[y];
                y--;
            }
        }
        else{
            if(a[x]>a[y]){
                d+=a[x];
                x++;
            }
            else{
                d+=a[y];
                y--;
            }
        }
    }

    cout << s << " " << d << "\n";

    return 0;
}