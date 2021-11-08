#include <stdio.h>

int main()
{
    int n,m,i,r;
    scanf("%d %d",&n,&m);

    r = m%(n*(n+1)/2);

   for(i=1;i<=n;i++){
       if(r<i){
           break;
       }
       r = r-i;
   }

    printf("%d\n",r);

    return 0;
}