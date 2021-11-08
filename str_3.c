#include <stdio.h>

int main()
{
    char up_c[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
    int i,lenght=26;

    printf("%s\n",up_c);

    for (i=0;i<lenght;i++){
        if(up_c[i]>=65 && up_c[i]<=90){
            up_c[i]='a'+(up_c[i]-'A');
        }
    }

    printf("%s\n",up_c);

    return 0;
}