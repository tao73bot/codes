#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,a;
    double x,y,x1,y1,d,b;
    cin >> r >> x >> y >> x1 >> y1;

    d = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));

    a = d/(2*r);
    b = (double)a*r*2;

    if(b!=d){
        a++;
    }
    cout << a << endl;

    return 0;
}