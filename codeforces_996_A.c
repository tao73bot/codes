#include <stdio.h>

int main()
{
    long long n,k=0;
    scanf("%lld",&n);
    while(n!=0){
        if(n-100>=0){
            n=n-100;
            k++;
        }
        if((n-100)<0 && (n-20)>=0){
            n=n-20;
            k++;
        }
        if((n-20)<0 && (n-10)>=0){
            n=n-10;
            k++;
        }
        if((n-10)<0 && (n-5)>=0){
            n=n-5;
            k++;
        }
        if((n-5)<0 && (n-1>=0)){
            n=n-1;
            k++;
        }
    }

    printf("%lld\n",k);

    return 0;
}
