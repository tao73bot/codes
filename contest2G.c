#include <stdio.h>

int main()
{
    int n,a,b,fm,positoin;
    scanf("%d %d %d",&n,&a,&b);

    fm=(n+a-b-1)/2;
    positoin = fm + 1;

    printf("%d\n",positoin);

    return 0;
}