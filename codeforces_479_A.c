#include <stdio.h>

int main()
{
    int a,b,c,A,B,C,D,E,F,G,H,max;
    scanf("%d %d %d",&a,&b,&c);

    A = a+b+c;
    B = a+(b*c);
    C = (b+c)*a;
    D = (a+b)*c;
    E = a*b*c;

    if(A>B){
        max = A;
    }
    else{
        max = B;
    }
    if(max>C){
        max = max;
    }
    else
    {
        max = C;
    }
    if(max>D){
        max = max;
    }
    else
    {
        max = D;
    }
    if(max>E){
        max = max;
    }
    else
    {
        max = E;
    }
    
    
    printf("%d\n",max);

    return 0;
    
}