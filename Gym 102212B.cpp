#include <bits/stdc++.h>
using namespace std;

int gcd(int n,int m)
{
    if(n%m==0){
        return m;
    }
    else{
        return gcd(m,n%m);
    }
}

int main()
{
    int a,b;
    long long c;
    cin >> a >> b;
    c = a*b/gcd(a,b);

    cout << c << endl;

    return 0;
}