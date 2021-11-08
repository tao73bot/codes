#include <stdio.h>

int main()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    while (n&&m)
    {
        if(n>m){
            if(n>=2){
                n=n-2;
                m=m-1;
                count++;
            }
            else
            {
                break;
            }
            
        }
        else
        {
            if(m>=2){
                m=m-2;
                n=n-1;
                count++;
            }
            else
            {
                break;
            }
            
        }
        
    }

    printf("%d\n",count);
     
    return 0;
    
}