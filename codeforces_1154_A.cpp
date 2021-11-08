#include <bits/stdc++.h>
using namespace std;

bool comp(int n, int m) 
{ 
    return (n < m); 
}

int main()
{
    long long x1,x2,x3,x4,a,b,c,d;
    cin >> x1>> x2>> x3>> x4;

    d = max({x1,x2,x3,x4},comp);

    if(d==x1){
        a = x1-x2;
        b = x1-x3;
        c = x1-x4;
    }
    if(d==x2){
        a = x2-x1;
        b = x2-x3;
        c = x2-x4;
    }
    if(d==x3){
        a = x3-x2;
        b = x3-x1;
        c = x3-x4;
    }
    if(d==x4){
        a = x4-x2;
        b = x4-x3;
        c = x4-x1;
    }

    printf("%lld %lld %lld\n",a,b,c);

    return 0;
}