#include <stdio.h>
#include <string.h>

int main()
{
    int n,len;
    char a[101];
    scanf("%d",&n);

    while (n--)
    {
        scanf("%s",a);
        len = strlen(a);

        if(len<=10){
            printf("%s\n",a);
        }
        if(len>10){
            printf("%c%d%c\n",a[0],(len-2),a[len-1]);
        }
    }

    return 0;
        
}