#include <stdio.h>

int main()
{
    int n,i,pi;
    scanf("%d",&n);

    if(n%2==1){
        printf("-1");
    }
    else
    {
        for(i=1;i<=n;i++){
            if(i%2==1){
                pi = i+1;
            }
            else
            {
                pi = i-1;
            }
            printf("%d ",pi);
           
        }
    }

    return 0;
    
}