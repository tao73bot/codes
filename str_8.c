#include <stdio.h>

int main()
{
    char str1[]="bangla",str2[]="desh",str3[12];
    int i,j,lenght1=6,lenght2=4;
    for(i=0,j=0;i<lenght1;i++,j++){
        str3[j]=str1[i];
    }
    for(i=0;i<lenght2;i++,j++){
        str3[j]=str2[i];
    }

    str3[j]='\0';

    printf("%s\n",str3);

    return 0;
}