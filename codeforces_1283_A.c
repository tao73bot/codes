#include <stdio.h>

int main()
{
    int t,h,m,min;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d %d",&h,&m);
        min = (23-h)*60 + (60-m);

        printf("%d\n",min);
    }
    
    return 0;
}