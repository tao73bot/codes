#include <stdio.h>
#include <string.h>


int main()
{
    int i,j=0,len,k;
    char a[202];
    scanf("%s",a);
    len = strlen(a);

    for(i=0;i<len;i++,j++){
        if(a[i] == '.'){
            a[j] = '0';
        }
        if(a[i]=='-'&&a[i+1]=='.'){
            a[j] = '1';
            i++;
        }
        if(a[i]=='-' &&a[i+1]=='-'){
            a[j] = '2';
            i++;
        }
    }

    for(k=0;k<len;k++){
        if(a[k]=='.'||a[k]=='-'){
            a[k]='\0';
            k++;
        }
        else continue;
    }

    printf("%s",a);

    return 0;
}