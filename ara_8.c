#include <stdio.h>

int main()
{
    char saarc[8][100]={"Bangladesh","Afganistan","India","Butan","Nepal","Pakistan","Sri lanka","Maldives"};
    int row;

    for(row=0;row<8;row++){
        printf("%s\n",saarc[row]);
    }

    return 0;
}