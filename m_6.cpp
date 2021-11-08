#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        double x1,x2,y1,y2,r1,r2,d;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+r1+r2;

        printf("%.3lf\n",d);
    }

    return 0;
}