#include <stdio.h>

int main()
{
    long long n,sum;
    scanf("%lld",&n);

    if(n%2==0){
        sum = n/2;
    }
    if(n%2==1){
        sum = (n+1)/2*(-1);
    }        

    printf("%lld\n",sum);

    return 0;
}