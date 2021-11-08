#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long p,a,b,c,x,y,z;
        cin >> p >> a >> b >> c;
        x=a-(p%a);
        if(x==a){
            x=0;
        }
        y=b-(p%b);
        if(y==b) y=0;
        z=c-(p%c);
        if(z==c) z=0;
        x=min(x,y);
        cout << min(x,z) << "\n";
    }
    return 0;
}