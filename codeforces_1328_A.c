#include <stdio.h>

int main()
{
    long long a,b,k,t,m;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);

        if(a%b==0){
            k=0;
        }
        else{
            m=a%b;
            k=b-m;
        }

        printf("%lld\n",k);
    }

    return 0;
}
