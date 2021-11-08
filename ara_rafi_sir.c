#include <stdio.h>

int main()
{
    int numbers[20];
    int i;
    for(i=0;i<20;i++){
       scanf("%d",&numbers[i]);
    }
    for(i=0;i<20;i++){
        printf("%d->%d\n",i,numbers[i]);
    }
   
    return 0;

}