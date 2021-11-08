#include <stdio.h>

int main()
{
    int n,x,k=0,m=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);

    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            m--;
        }
        if(s[i]=='R'){
            k++;
        }
    }

    x = k-m+1;

    printf("%d\n",x);

    return 0;
}