#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=(n+1);i<=2*n;i++){    //for(i=0;i<n;i++) && d = 3*n + 1; a = d+i;
        printf("%d ",i);
    }
    return 0;
}