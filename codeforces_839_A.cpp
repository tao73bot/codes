#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,cnt=0,d=0;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<8){
            d+=a[i];
            cnt++;
        }
        if(a[i]>=8){
            d+=8;
            a[i+1]=a[i+1]+a[i]-8;
            cnt++;
        }
        if(d>=k){
            break;
        }
    }
    if(cnt>n||d<k){
        printf("-1\n");
    }
    else
    {
        printf("%d\n",cnt);
    }
    
    return 0;
}