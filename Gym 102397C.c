#include <stdio.h>
#include <string.h>

int main()
{
    int x,y,i,l;
    char a[100];
    scanf("%d %d",&x,&y);
    scanf("%s",a);
    l = strlen(a);

    for(i=0;i<l;i++){
        if(a[i]=='U'){
            y+=1;
        }
        else if(a[i]=='D'){
            y-=1;
        }
        else if(a[i]=='L'){
            x-=1;;
        }
        else if(a[i]=='R'){
            x+=1;
        }
    }
    printf("%d %d\n",x,y);
    
    return 0;
}