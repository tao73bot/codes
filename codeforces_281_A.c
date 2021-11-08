#include <stdio.h>
#include <string.h>

int main()
{
    char ara[1002];
    gets(ara);

    if(ara[0]>=97 && ara[0]<=122){
        ara[0]='A' + ara[0]-'a';
    }

    printf("%s\n",ara);

    return 0;
}