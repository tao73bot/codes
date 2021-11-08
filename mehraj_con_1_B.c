#include <stdio.h>

int main()
{
    int n,d,i,k,count=0;
    scanf("%d %d",&n,&d);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
         for(k=i+1;k<n;k++){
            if((ara[k]-ara[i]<=d)){
            count=count++;
            }
            else
            {
                break;
            }
            
        }
    }
 printf("%d\n",2*count);
    return 0;

}