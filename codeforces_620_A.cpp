#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1,y1,x2,y2,a,b,d;
    cin >>x1>>y1>>x2>>y2;

    a = fabs(x1-x2);
    b = fabs(y1-y2);
    d = max(a,b);

    cout << d << endl;

    return 0;
}

