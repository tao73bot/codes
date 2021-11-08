#include <stdio.h>

int main()
{
    int t,a,b,c;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a*a + b*b -c*c)==0||(b*b +c*c -a*a)==0||(a*a - b*b +c*c)==0){
            printf("yes\n");
        }

        else
        {
            printf("no\n");
        }
        
    }

    return 0;
    
}