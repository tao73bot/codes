#include <stdio.h>

int main()
{
    int k,n,w,sum=0,price,brouht;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        sum=sum+i;
    }
    price=k*sum;
    if(n>=price){
        brouht=0;
    }
    else{
        brouht=price-n;
    }

    printf("%d",brouht);

    return 0;

}