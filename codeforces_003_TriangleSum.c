#include <stdio.h>

int main()
{
    long long n,i,sum=0;
    scanf("%lld",&n);

    while(n--){
        scanf("%lld",&i);
        sum+=(3*i);
    }
    printf("%lld\n",sum);

    return 0;
}