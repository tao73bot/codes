#include <stdio.h>

int main()
{
    int n,i,d=2;
    scanf("%d",&n);

    while (n)
    {
        for(i=2;i<d;i++){
            if(d%i==0){
                break;
            }
        }
        if(i==d){
            printf("%d ",d);
            n--;
        }
        d++;
    }

    return 0;
}