#include <stdio.h>

int main()
{
    int n,p,q,k=0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d",&p,&q);
        if((q-p)>=2){
            k++;
        }
    }

    printf("%d\n",k);

    return 0;
    
}