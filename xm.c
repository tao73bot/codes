#include<stdio.h>
#include<stdlib.h>
struct emp
{
    char name[100];
};

void b_sort(struct emp s[], int n)
{
     int i,j;
     struct emp temp;

     for(i=1;i<n;i++){
          for(j=0;j<n-i;j++){
               if(compare((s[j],s[j+1]))==1){
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
               }
          }
     }
}

char compare(struct student a, struct student b)
{
    if(a[0].name==b[0].name){
        return strlen(a.name)<strlen(b.name);
    }
    else return a[0].name>b[0].name;
}

int main()
{
  int n;
    printf("Enter Size (n):");
    scanf("%d",&n);
    struct emp s[n];
    printf("\nEnter Employee names:\n");
    for(int i=0;i<n;i++){
        gets(s[i].name);
    }
    b_sort(s,n);
    for(int i=0;i<n;i++){
        printf("%s",s[i].name);
    }
    return 0;
}