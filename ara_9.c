#include <stdio.h>
#include <string.h>

int main()
{
    char saarc[8][100]={"Bangladesh","Afganistan","India","Butan","Nepal","Pakistan","Sri lanka","Maldives"};
    int row,col,name_lenght;

    for(row=0;row<8;row++){
        name_lenght = strlen(saarc[row]);

        for(col=0;col<name_lenght;col++){
            printf("(%d,%d)=%c",row,col,saarc[row][col]);
        }

        printf("\n");
    }

    return 0;
}