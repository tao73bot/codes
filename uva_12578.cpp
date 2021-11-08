#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double L,c,r;
        cin >> L;
        
        c = acos(-1)*L*L/25;
        r = 6*L*L/10;
        printf("%.2lf %.2lf\n",c,r-c);
    }
    
    return 0;
}