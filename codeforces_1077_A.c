#include <stdio.h>

int main()
{
    int t;
    long long a,b,k,x;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld %lld %lld",&a,&b,&k);

        if(k%2==0){
            x = (a-b)*(k/2);
        }
        if(k%2!=0){
            x = (a-b)*(k/2) + a;
        }

        printf("%lld\n",x);
    }

    return 0;
}