#include <stdio.h>

int main()
{
    int i=0,T,N,count=0,uc,lc;
    scanf("%d %d",&T,&N);
    int ara[N];
    while (i<T)
    {
        for (i=0;i<N;i++){
        scanf("%d",&ara[i]);

            if(ara[i]<ara[i+1]){
                uc=count++;
            }
            else if(ara[i]>ara[i+1]){
                lc=count++;
            }
            else{
                uc = lc =0;
            }
        }
    
    }
    for(i=1;i<=T;i++){
        printf("Case %d : %d %d\n",i,uc,lc);
    }
    
    return 0;
}