#include <stdio.h>

int main()
{
    int n,i;
    double sum=0;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++){
        sum+=ara[i];
    }

    sum=sum/n;

    printf("%.12lf\n",sum);

    return 0;
}