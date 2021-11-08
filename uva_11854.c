#include <stdio.h>

int main()
{
    int a,b,c;

    while (scanf("%d %d %d",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0){
            break;
        }

        if(a*a+b*b-c*c==0||a*a+c*c-b*b==0||b*b+c*c-a*a==0){
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    
    return 0;
}