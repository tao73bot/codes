#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    long long ans;
    scanf("%d",&n);

    ans = pow(2,(n+1)) - 2;

    printf("%lld\n",ans);

    return 0;
}