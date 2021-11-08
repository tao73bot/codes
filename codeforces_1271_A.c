#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,sum=0;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    while (d--)
    {
        if(a&&b&&c){
            if(e>f){
                sum+=e;
                a--;
            }
            else
            {
                sum+=f;
                b--;
                c--;
            }
        }
        else if(a){
            sum+=e;
            a--;
        }
        else if(b && c)
        {
            sum+=f;
            b--;
            c--;
        }
        else
        {
            break;
        }
        
    }
    
    printf("%d\n",sum);

    return 0;
}