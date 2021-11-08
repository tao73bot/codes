#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,d,step = 0;
    scanf("%d",&n);
    char a[1002],b[1002];
    scanf("%s",a);
    scanf("%s",b);

    for(i=0;i<n;i++){
        d = fabs(a[i] - b[i]);
        if(d<=5){
            step = step + d;
        }
        if(d>5){
            step = step + 10 - d;
        }
    }
    printf("%d\n",step);

    return 0;
}