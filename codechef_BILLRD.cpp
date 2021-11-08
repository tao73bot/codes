#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,x,y,x1,x2,x3,x4,y1,y2,y3,y4,d,a,b;
    cin >> n >> k >> x >> y;
    if(x==y){
        cout << n << " " << n <<"\n";
        return;
    }
    if(x>y){
        x1=n;
        y1=n-x+y;
        x2=y1;
        y2=n;
        x3=0;
        y3=n-x2;
        x4=y3;
        y4=0;
    }
    if(x<y){
        x1=n-y+x;
        y1=n;
        x2=n;
        y2=x1;
        x3=n-y2;
        y3=0;
        x4=0;
        y4=x3;
    }
    d=k%4;
    if(d==1){
        a=x1;
        b=y1;
    }
    if(d==2){
        a=x2;
        b=y2;
    }
    if(d==3){
        a=x3;
        b=y3;
    }
    if(d==0){
        a=x4;
        b=y4;
    }
    cout << a <<" "<< b <<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}