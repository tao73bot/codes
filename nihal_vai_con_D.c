#include <stdio.h>
#include <math.h>

long long smallest_prime_divisor(int n)
{
    long long i,root;

    if(n%2==0){
        return 2;
    }

    root = sqrt(n);

    for(i=3;i<=root;i=i+2){
        if(n%i==0){
            return i;
        }
    }

    return n;
}

int main()
{
    long long n,d,k;
    scanf("%lld",&n);
    d = smallest_prime_divisor(n);
    
    k= n/d;
    
    printf("%lld",k);

    return 0;
}