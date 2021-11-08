#include <stdio.h>

int main()
{
    long long a,b;
    int t;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld %lld",&a,&b);

        if(a<b){
            printf("<\n");
        }
        if(a>b){
            printf(">\n");
        }
        if(a==b){
            printf("=\n");
        }
    }
    return 0;
}