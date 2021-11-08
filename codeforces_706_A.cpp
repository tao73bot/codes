#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,x,y,v;
    double d,t,ans = 100000000;
    cin >> a >>b >> n;
    while (n--)
    {
        cin >> x >> y >> v;
        d = sqrt((x-a)*(x-a)+(y-b)*(y-b));
        t = d/v;
        ans = min(ans,t);
    }

    printf("%.20lf\n",ans);

    return 0;
}