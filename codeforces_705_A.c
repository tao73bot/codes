#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==0){
            printf("I hate ");
        }
        if(i%2==1){
            printf("I love ");
        }
        if(i!=n-1){
            printf("that ");
        }
        else
        {
            printf("it");
        }
    }

    return 0;
}