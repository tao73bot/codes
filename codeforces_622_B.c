#include <stdio.h>

int main()
{
    int h,m,a,b,c;
    scanf("%d:%d",&h,&m);
    scanf("%d",&a);

    c = a + m;
    m = c%60;
    b = c/60;
    h = (b+h)%24;

    printf("%02d:%02d\n",h,m);

    return 0;
}