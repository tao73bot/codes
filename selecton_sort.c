#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp; 
}

void selectionSort(int a[],int n)
{
    int i,j,min,st=1;;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                min=j;
            }
        }
        if(min!=i){
            swap(&a[i],&a[min]);
        }
        printf("STEP %d: ",st);
        st++;
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
}

int main()
{
    int a[] = {64,25,12,22,11};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a,n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}