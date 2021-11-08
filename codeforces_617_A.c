#include <stdio.h>

int main()
{
    int x,i,ans=0,k;
    scanf("%d",&x);

    for(i=5;i>=1;i--){
       k=x/i;
       x=x%i;
       ans=ans+k;
    }

    printf("%d\n",ans);

    return 0;
}