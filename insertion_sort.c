#include <stdio.h>

void insertionSort(int a[],int n)
{
    int x,i,j;
    for(i=1;i<n;i++){
        x=a[i];
        j=i-1;
        while(j>=0&&a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
        printf("STEP %d: ",i);
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
}

void cout(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a,n);
    printf("SORTED ARRAY : ");
    cout(a,n);

    return 0;
}