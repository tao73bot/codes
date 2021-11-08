#include <stdio.h>

int ara_sum(int ara[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + ara[i];
    }

    return sum;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    int sum = ara_sum(ara,n);

    printf("%d\n",sum);

    return 0;

}