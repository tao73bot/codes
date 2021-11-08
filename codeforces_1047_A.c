#include <stdio.h>

int main()
{
    long long n,a,b,c,d;
    scanf("%lld",&n);
    
    d=n/3;
    if(n%3==0 && d%3!=0){
        a = n/3;
        b = n/3;
        c = n/3;
    }
    else if(n%3==0 && d%3==0){
        a = (n/3) - 1;
        b = (n/3) - 1;
        c = (n/3) + 2;
    }
    else if(n%3==1 && d%3==0){
        a = (n/3) - 1;
        b = (n/3) + 1;
        c = (n/3) + 1;
    }
    else if(n%3==2 && d%3==0){
        a = (n/3) - 1;
        b = (n/3) + 1;
        c = (n/3) + 2;
    }
    else if(n%3==1 && d%3==1){
        a = n/3;
        b = (n/3) ;      //don't minus 1 and plus 2
        c = (n/3) + 1;
    }
    else if(n%3==1 && d%3==2){
        a = n/3;
        b = (n/3) - 1;      //don't plus 1 and minus 2
        c = (n/3) + 2;
    }
    else if(n%3==2 && d%3==1){
        a = n/3;
        b = (n/3) + 1;
        c = (n/3) + 1;
    }
    else if(n%3==2 && d%3==2){
        a = n/3;
        b = n/3;
        c = (n/3) + 2;
    }

    printf("%lld %lld %lld",a,b,c);  

    return 0;
}