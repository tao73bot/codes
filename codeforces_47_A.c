#include <stdio.h>

int main()
{
    int n,i,j=0,sum=0;
    int ara[31];
    scanf("%d",&n);
    for(i=1;i<32;i++){
        sum = i*(i+1)/2;
        if(sum==n){
            printf("YES\n");
        }
        else
        {
            j++;
            if(j==31){
                printf("NO\n");
            }
        }
        
    }

    return 0;
}