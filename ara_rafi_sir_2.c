#include <stdio.h>

int main()
{
    char ch[3][2][2]={{{'a','b'},{'d','a'}},
    {{'a','b'},{'d','a'}},
    {{'a','b'},{'d','a'}}};
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("%c\n",ch[3][2][2])
            }
        }
    }

    return 0;


}