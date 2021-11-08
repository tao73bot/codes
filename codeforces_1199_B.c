#include <stdio.h>

int main()
{
    long long H,L;
    double A;
    scanf("%lld %lld",&H,&L);

    A = (L*L-H*H)/(2.0*H);

    printf("%.13lf\n",A);

    return 0;
}