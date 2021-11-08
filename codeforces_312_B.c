#include <stdio.h>

int main()
{
    double a,b,c,d;
    double x,p,q;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    p = (1-(a/b));
    q = (1-(c/d));
    x = 1-(p*q);

    printf("%.12lf\n",(a/b)/x);

    return 0;
}