#include <stdio.h>

int main()
{
    int k,n,s,p,i,m;
    scanf("%d %d %d %d",&k,&n,&s,&p);

    if(n%s==0){
        i = n/s;
    }
    if(n%s!=0){
        i = (n/s) + 1;
    }
    if((k*i)%p==0){
        m = k*i/p;
    }
    if((k*i)%p!=0){
        m = (k*i/p) + 1;
    }

    printf("%d\n",m);

    return 0;
}