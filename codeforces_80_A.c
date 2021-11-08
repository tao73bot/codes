#include <stdio.h>

int main()
{
    int n,m,i,count=0;
    int ara[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    scanf("%d %d",&n,&m);

    for(i=0;i<15;i++){
        if(n==ara[i] && m==ara[i+1]){
            count++;
            break;
        }
    }

    if(count==0){
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
    
}