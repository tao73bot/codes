#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long c[3],a[5];
        long long x,y,z,m,n,i;
        for(i=0;i<3;i++){
            cin >> c[i];
        }
        for(i=0;i<5;i++){
            cin >> a[i];
        }
        x=c[0]-a[0];
        y=c[1]-a[1];
        z=c[2]-a[2];
        if(x<0||y<0||z<0){
            cout <<"NO\n";
        }
        if(x>=0&&y>=0&&z>=0){
            a[3]-=x;
            a[4]-=y;
            if(a[3]<=0){
                a[3]=0;
            }
            if(a[4]<=0){
                a[4]=0;
            }
            if(z-a[3]-a[4]>=0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}