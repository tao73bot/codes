#include <stdio.h>

int main()
{
    int n,k,a,b,c,t;
    scanf("%d %d",&n,&k);

    if((2*n)%k==0){
        a = (2*n)/k;
    }
    else
    {
        a = ((2*n)/k) + 1;
    }
    if((5*n)%k==0){
        b = (5*n)/k;
    }
    else
    {
        b = ((5*n)/k) + 1;
    }
    if((8*n)%k==0){
        c = (8*n)/k;
    }
    else
    {
        c = ((8*n)/k) + 1;
    }

    t = a+b+c;

    printf("%d\n",t);

    return 0;
}