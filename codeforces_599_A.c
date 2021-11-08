#include <stdio.h>

int main()
{
    int d1,d2,d3,min,a,b,c,d;
    scanf("%d %d %d",&d1,&d2,&d3);

    a = d1+d2+d3;
    b = 2*(d1+d2);
    c = 2*(d1+d3);
    d = 2*(d2+d3);

    if(a<b){
        min = a;
    }
    else
    {
        min = b;
    }
    if(min<c){
        min = min;
    }
    else
    {
        min = c;
    }
    if(min<d){
        min = min;
    }
    else{
        min = d;
    }
    
    printf("%d\n",min);

    return 0;
}