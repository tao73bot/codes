#include <stdio.h>

int main()
{
    long long n,k,x;
    scanf("%lld %lld",&n,&k);

    printf("%lld\n",(n/k+1)*k);

    return 0;
}