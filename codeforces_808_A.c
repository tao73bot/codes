#include <stdio.h>

int main()
{
    long long n,k;
    scanf("%lld",&n);

    if(n>=1&&n<=9){
        printf("%lld\n",((n+1) - n)); // k = ((n/pow(10,digit-1))+1)*pow(10,digit-1) -n
    }
    else if(n>=10 && n<=99){
        printf("%lld\n",((n/10)+1)*10 - n);
    }
    else if(n>=100 && n<=999){
        printf("%lld\n",((n/100)+1)*100 - n);
    }
    else if(n>=1000 && n<=9999){
        printf("%lld\n",((n/1000)+1)*1000 - n);
    }
    else if(n>=10000 && n<=99999){
        printf("%lld\n",((n/10000)+1)*10000 - n);
    }
    else if(n>=100000 && n<=999999){
        printf("%lld\n",((n/100000)+1)*100000 - n);
    }
    else if(n>=1000000 && n<=9999999){
        printf("%lld\n",((n/1000000)+1)*1000000 - n);
    }
    else if(n>=10000000 && n<=99999999){
        printf("%lld\n",((n/10000000)+1)*10000000 - n);
    }
    else if(n>=100000000 && n<=999999999){
        printf("%lld\n",((n/100000000)+1)*100000000 - n);
    }
    else if(n>=1000000000 && n<=9999999999){
        printf("%lld\n",((n/1000000000)+1)*1000000000 - n);
    }

    return 0;
}