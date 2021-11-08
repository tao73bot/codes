#include <stdio.h>
#include <math.h>

int main()
{
    int n,d,i,j,ans=0;
    scanf("%d %d",&n,&d);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && fabs(ara[i]-ara[j])<=d){
                ans++;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}