#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a,b,x,y,z;
        cin >> a >> b;
        x=(a*a)/sqrt(a*a+b*b);
        y=(b*b)/sqrt(a*a+b*b);
        z=sqrt(fabs(b*b-y*y));

        printf("%.6lf\n",(x*x)+(y*z)-(z*z));
    }
    return 0;
}