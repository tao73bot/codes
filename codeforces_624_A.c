#include <stdio.h>

int main()
{
    double d,L,v1,v2,t;
    scanf("%lf %lf %lf %lf",&d,&L,&v1,&v2);

    t = (L-d)/(v1+v2);

    printf("%.20lf\n",t);

    return 0;
}