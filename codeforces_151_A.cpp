#include <bits/stdc++.h>
using namespace std;

int comp(int a,int b)
{
    return a<b;
}

int main()
{
    int n,k,l,c,d,p,nl,np,A,B,C,ans;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;

    A = k*l/nl;
    B = c*d;
    C = p/np;

    ans = min({A,B,C},comp)/n;

    cout << ans << endl;

    return 0;
}
