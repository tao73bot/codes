#include <stdio.h>

int main()
{
    int t;
    long long n;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld",&n);

        if(n%4!=0){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}