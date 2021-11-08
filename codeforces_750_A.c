#include <stdio.h>

int main()
{
    int n,k,i,m=0,sum=0;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++){
        sum = sum + 5*i;
        if((240-k-sum)>=0){
            m++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n",m);

    return 0;
}