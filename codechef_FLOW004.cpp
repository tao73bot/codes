#include <bits/stdc++.h>
using namespace std;

int power(int a,int x)
{
    int p=1;
    for(int i=0;i<x;i++){
        p*=a;
    }
    return p;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,l,f,d;
        cin >> n;
        l=n%10;
        d = floor(log10(n));
        f = n/power(10,d);
        cout << l+f << endl;
    }
    return 0;
}