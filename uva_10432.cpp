#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r,n,A;
    while (scanf("%lf %lf",&r,&n)!=EOF)
    {
        A = n*r*r*sin((2*acos(-1))/n)/2;

        printf("%.3lf\n",A);   
    }
    
    return 0;
}