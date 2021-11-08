#include <stdio.h>

int main()
{
    long long t,a,b,c,n,m,A,B,C;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
        if((a+b+c+n)%3==0){
            m =(a+b+c+n)/3;
            if(m>=a&& m>=b &&m>=c){
                printf("YES\n");
            }

            else
            {
                printf("NO\n");
            }
            
        }
        else
        {
            printf("NO\n");
        }
        
    }

    return 0;
    
}