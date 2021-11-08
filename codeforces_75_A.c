#include <stdio.h>

int remove0(int n)
{
    int pow=1,i,d=0;
    while (n>0)
    {
        i = n%10;
        n /=10;
        if(i!=0){
            d += i*pow;
            pow*=10;
        }
    }
    
    return d;
}

int main()
{
    long long a,b,c;
    scanf("%lld %lld",&a,&b);

    c = a+b;

    a=remove0(a);
    b=remove0(b);
    c=remove0(c);

    if(c==a+b){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
    
}