#include <stdio.h>

double add(double n1,double n2);

int main()
{
    double a,b,c;
    a=2.5;
    b=2.5;
    c=add(a,b);
    printf("%lf\n",c);

    return 0;
}

double add(double n1,double n2)
{
    double sum = n1 + n2;
    return sum;
}