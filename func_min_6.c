#include <stdio.h>

int find_min(int ara[],int n);

int main()
{
    int i,n;
    scanf("%d",&n);
    int ara[n];
    for (i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int min=find_min(ara,n);
    printf("%d\n",min);

    return 0;

}

int find_min(int ara[],int n)
{
    int i;
    int min=ara[0];
    
    for (i=1;i<n;i++){
        if (ara[i]<min){
            min=ara[i];
        }
    }
    
    return min;
}