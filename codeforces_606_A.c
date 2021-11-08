#include <stdio.h>

int main()
{
    int a,b,c,x,y,z,d,e;
    scanf("%d %d %d\n%d %d %d",&a,&b,&c,&x,&y,&z);

    if((a>=x)&&(b>=y)&&(c>=z)){
        printf("Yes\n");
    }

    else if((a>=x)&&(b>=y)&&(c<z)){
        e = z-c;
        if(((a-x)/2)+((b-y)/2)>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a>=x)&&(b<y)&&(c>=z)){
        e = y-b;
        if(((a-x)/2)+((c-z)/2)>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a<x)&&(b>=y)&&(c>=z)){
        e = x-a;
        if(((c-z)/2)+((b-y)/2)>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a>=x)&&(b<y)&&(c<z)){
        d = a-x;
        e = z-c+y-b;
        if(d/2>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a<x)&&(b>=y)&&(c<z)){
        d = b-y;
        e = z-c+x-a;
        if(d/2>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a<x)&&(b<y)&&(c>=z)){
        d = c-z;
        e = y-b+x-a;
        if(d/2>=e){
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    else if((a<x)&&(b<y)&&(c<z)){
        printf("No\n");
    }

    return 0;
}