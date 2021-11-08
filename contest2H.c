#include <stdio.h>
#include <math.h>

int main()
{
    int r,n;
    double A,x,a,h;
    scanf("%d %d",&r,&n);
    x=(90-(180/n));
    a=2*r*cos(x);
    h=r*sin(x);

    A=(n*a*h)/2;
    
  
    printf("%lf\n",A);

    return 0;

}