#include <stdio.h>

int string_lenght(char str[])
{
    int i;

    for(i=0;str[i]!='\0';i++);

    return i;
}

int main()
{
    char me[100];
    int lenght;

    while (1==scanf("%s",me))
    {
        lenght = string_lenght(me);
        printf("%d\n",lenght);
    }

    return 0;
}