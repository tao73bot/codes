#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n,a=1,sum=0;
        scanf("%lld",&n);
        sum = n*(n+1)/2;
        while (a<=n)
        {
            sum -=a*2;
            a *=2; 
        }
        printf("%lld\n",sum);
    }

    return 0;
}