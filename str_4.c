#include <stdio.h>

int string_lenght(char str[])
{
    int i,lenght=0;

    for(i=0;str[i]!='\0';i++){
        lenght++;
    }
    return lenght;
}

int main()
{
    char country[100];
    int lenght;

    while (1==scanf("%s",country))
    {
        lenght=string_lenght(country);
        printf("lenght: %d\n",lenght);
    }

    return 0;
    
}