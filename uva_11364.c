#include <stdio.h>

int main()
{
    int t,n,x;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);
        int max=0,min=99;
        while (n--)
        {
            scanf("%d",&x);
            if(max<x){
                max = x;
            }
            else
            {
                max=max;
            }
            
            if(min>x){
                min = x;
            }
            else
            {
                min = min;
            }
            
        }
        printf("%d\n",2*(max-min));
    }
    
    return 0;
}