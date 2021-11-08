#include <stdio.h>

int main()
{
    long long x,y,n,k;
    int t;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld %lld %lld",&x,&y,&n);

        if((n-(n%x)+y)<=n){
            k = n-(n%x)+y;
        }
        else
        {
            k = n - (n%x) -(x-y);
        }
        

        printf("%lld\n",k);
    }

    return 0;
}