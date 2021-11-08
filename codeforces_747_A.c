#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,x,i;
    scanf("%d",&n);
    x = sqrt(n);
    
    for(i=1;i<=x;i++){
        if((i*(n/i))==n){
            a=i;
            b=n/i;
        }
    }
    
    printf("%d %d\n",a,b);

    return 0;
}