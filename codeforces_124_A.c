#include <stdio.h>

int main()
{
    int n,a,b,p,i;
    scanf("%d %d %d",&n,&a,&b);

    if((a+1)>(n-b)){
        p = a+1;
    }
    else
    {
        p = n-b;
    }

    i = n-p+1;

    printf("%d\n",i);

    return 0;
}