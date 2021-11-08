#include <stdio.h>
#include <string.h>

int main()
{
    int n,k=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);

    for(int i=0;i<n;i=i+2){
        if(s[i]=='1'){
            k++;
        }
        if(s[i]=='1'&&s[i+1]=='1'){
            k=0;
        }
    }

    if(n%2==0 && k==(n/2)){
        printf("YES\n");
    }
    if(n%2==0 && k!=(n/2)){
        printf("NO\n");
    }
    if(n%2!=0 && k==(n-(n/2))){
        printf("YES\n");
    }
    if(n%2!=0 && k!=(n-(n/2)))
    {
        printf("NO\n");
    }
    
    return 0;
}