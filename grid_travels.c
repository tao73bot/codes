#include <stdio.h>

int main()
{
    int x,y;
    char ch;
    scanf("%d %d",&x,&y);
    
    while (scanf("%c",&ch)!=EOF)
    {
        if(ch=='U'){
            x = x-1;
            y = y;
        }
        else if(ch=='D'){
            x = x+1;
            y = y;
        }
        else if(ch=='L'){
            x = x;
            y = y-1;
        }
        else if(ch=='R'){
            x = x;
            y = y+1;
        }
        else if(ch=='S'){
            printf("Final position : %d, %d\n",x,y);
        }
        
    }
    
    return 0;
}