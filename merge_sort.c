#include <stdio.h>

int cnt=1;

void cout(int *a,int x){
    for(int i=0;i<x;i++)
        printf("%d ",a[i]);
    printf("\n\n");
}

void merge(int *a, int lo, int mid, int hi)
{
    int i,j,k,n1,n2;
    n1=mid-lo+1;
    n2=hi-mid;
    k=lo;

    int low[n1],high[n2];

    for(i=0;i<n1;i++){
        low[i]=a[k++];
    }
    for(i=0;i<n2;i++){
        high[i]=a[k++];
    }
    i=0,j=0,k=lo;

    while(i<n1&&j<n2){
        if(low[i]<=high[j]){
            a[k]=low[i];
            i++;
        }
        else
        {
            a[k]=high[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=low[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=high[j];
        j++;
        k++;
    }

    printf("Merged Array: ",cnt);
    cnt++;
    for(int b=lo;b<=hi;b++)
        printf("%d ",a[b]);
    printf("\n\n\n");
}

void mergeSort(int *a, int l, int r) {
   int m, i=1;
   if(l < r) {
      int m = l+(r-l)/2;

      printf("Left Sub-Array: ");
      for(i=l ; i<=m ; i++)printf("%d ",a[i]) ;
      printf("\t\t") ;
      printf("Right Sub-Array: ");
      for(i=m+1 ; i<=r ; i++)printf("%d ",a[i]) ;
      printf("\n\n") ;
      mergeSort(a, l, m);
      mergeSort(a, m+1, r);



      merge(a, l, m, r);

   }
}


int main()
{
    int n;
    int a[]={32,12,90,34,10,54};
    n=6;
    printf("Before Sorting: ");
    cout(a,n);
    mergeSort(a,0,n-1);
    printf("After Sorting: ");
    cout(a,n);

    return 0;
}
