#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int x1,y1,x2,y2,x,y,p,q,s,a;

    cin >> t;
    
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        p = x1*x2 - y1*y2;
        q = x1*y2 + x2*y1;

        s = p/q;

        a = atan(y1/x1) + atan(y2/x2);

        y = sqrt(((x1*x1+y1*y1)*(x2*x2+y2*y2))/(1+s*s));
        x = sqrt(((x1*x1+y1*y1)*(x2*x2+y2*y2)) - y*y);

        if(a<=(acos(-1))/2){
            x = x;
            y = y;
        }
        else if(a<=(acos(-1))){
            x = -x;
            y = y;
        }
        else if(a<=3*(acos(-1)/2)){
            x = -x;
            y = -y;
        }   
        else if(a<=2*(acos(-1))){
            x = x;
            y = -y;
        }

        printf("%d %d\n",x,y);
    }

    return 0;

}