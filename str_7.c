#include <stdio.h>

int string_lenght(char str[])
{
    int i=0;

    while (str[i]!='\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char ch[100];
    int lenght;

    while (1==scanf("%s",ch))
    {
        lenght = string_lenght(ch);
        printf("lenght = %d\n",lenght);
    }

    return 0;
    
}