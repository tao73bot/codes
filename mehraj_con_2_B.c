#include <stdio.h>

int main()
{
    int k,n,s,p,i,m;
    scanf("%d %d %d %d",&k,&n,&s,&p);
    i=(n/s)+1;
    if(m==(k*i)/p){
        m=(k*i)/p;
    }
    else
    {
        m=((k*i)/p)+1;
    }
    printf("%d\n",i);
    printf("%d\n",m);

    return 0;
}