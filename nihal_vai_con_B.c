#include <stdio.h>
#include <math.h>

int sorted_ara(int a[],int n)
{
    for(int i =1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }

    re
}

int main()
{
    int n,count =1;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        count = count +b[i];

        while (count--)
        {
            
        }
        
    }
}