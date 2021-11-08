#include <stdio.h>

int main()
{
    int x;
    long long sum;

    while (scanf("%d",&x)==1)
    {
        sum =1;
        sum = sum*x*(x+1)/2;
        sum = sum*x*(x+1)/2;

        printf("%lld\n",sum);

    }
    
    return 0;
}