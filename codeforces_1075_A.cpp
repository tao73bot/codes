#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,y,a,b,c;
    cin >>n;
    cin >>x>>y;
    a = max((x-1),(y-1));
    b = max((n-x),(n-y));
    c = min(a,b);

    if(a==b){
        printf("White\n");
    }
    else if(c==a){
        printf("White\n");
    }
    else if(c==b){
        printf("Black\n");
    }

    return 0;
}