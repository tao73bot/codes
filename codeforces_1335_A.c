#include <stdio.h>

int main()
{
    int t;
    long long n,d;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld",&n);
        if(n%2==0){
            d = (n/2)-1;
        }
        if(n%2!=0){
            d = n/2;
        }

        printf("%lld\n",d);
    }

    return 0;
    
}