#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0,k=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1) c1++;
        if(a[i]==2) c2++;
        if(a[i]==3) c3++;
        if(a[i]==4) c4++;
    }
    k=k+c4;
    if(c3>=c1){
        k=k+c3;
        c1=0;
    }
    else{
        k=k+c3;
        c1=c1-c3;
    }
    if(c2%2){
        c2--;
        c1=c1+2;
    }
    k=k+(c2/2);
    k=k+ceil(c1/4.0);
    cout << k << "\n";
 
    return 0;
}