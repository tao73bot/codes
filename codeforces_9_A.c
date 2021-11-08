#include <stdio.h>
#include <math.h>

int main()
{
    int Y,W,A;
    scanf("%d %d",&Y,&W);
    if(Y>W){
        A=Y;
    }
    else
    {
        A=W;
    }
    
    A=(6-A)+1;

    if(A%2==1){
        if(A==3){
            printf("1/2\n");
        }
        else
        {
            printf("%d/6\n",A);
        }
    }
    else
    {
        if(A==4){
            printf("2/3\n");
        }
        else
        {
            printf("1/%d",6/A);
        }
        
    }
    

    return 0;
}