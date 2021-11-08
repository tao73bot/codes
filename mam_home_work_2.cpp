#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000];
    int i,n,x,pos;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";

    x = 6;
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i]>x){
            pos = i;
            break;
        }
    }
    n++;
    for(i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=x;
    for(i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";

    return 0;
}