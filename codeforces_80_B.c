#include <stdio.h>

int main()
{
    int H,M;
    double x,y;
    scanf("%d:%d",&H,&M);
    x=30*(H%12) + M / 2.0;
    y= M * 6;

    printf("%.1lf %.1lf\n",x,y);

    return 0;
}