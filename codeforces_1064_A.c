#include <stdio.h>

int main()
{
    int a,b,c,time,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c||b<a+c||c<b+a){
        time=0;
    }
    if((a>=b+c)){
        time=a-b-c+1;
    }
    if(b>=a+c){
        time = b-a-c+1;
    }
    if(c>=a+b)
    {
        time = c-a-b+1;
    }
    
    

    printf("%d",time);

    return 0;
    
}