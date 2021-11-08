#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        long long n,sum;
        int x,k;
        scanf("%lld",&n);

        for(k=2;k<=36;k++){
            sum = pow(2,k) - 1;
            if(n%sum==0){
                x = n/sum;
                printf("%d\n",x);
                break;
            }
        }
    }

    return 0;
}