#include <stdio.h>

int main()
{
    int y,i,a,b,c,d;
    scanf("%d",&y);

    for(i=y+1;i<=9012;i++)
    {
        a = i/1000;
        b = i/100%10;
        c = i/10%10;
        d = i%10;

        if(a!=b && c!=d && a!=c && a!=d && b!=c && b!=d){
            break;
        }
    }

    printf("%d\n",i);

    return 0;
}