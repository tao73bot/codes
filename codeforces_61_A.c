#include <stdio.h>
#include <string.h>

int main()
{
    char ara1[1000],ara2[1000],ara3[1000];
    int i,len;
    scanf("%s",ara1);
    scanf("%s",ara2);
    len=strlen(ara1);

    for(i=0;i<len;i++){
        if(ara1[i]==ara2[i]){
            ara3[i]='0';
        }
        else
        {
            ara3[i]='1';
        }

        printf("%c",ara3[i]);
    }

    return 0;
}