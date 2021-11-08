#include <stdio.h>

int main()
{
    int a,b,i,k,m;
    long long sum=0;
    int ara[]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++){
        k=i;
        while (k>0)
        {
            m=k%10;
            k = k/10;
            sum = sum+ara[m];
        }
    }

    printf("%lld\n",sum);

    return 0;
}