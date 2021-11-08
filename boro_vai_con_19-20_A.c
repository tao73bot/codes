#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[65];
    int len,decimal,power,i,k,j;
    scanf("%s",s);

    decimal=0;
    len=strlen(s);
    power=len - 1;

    for(i=0;i<len;i++){
        decimal += (s[i]-'0') * pow(2,power);
        power--;
    }

    j= log(decimal)/log(4);

    if(j%2==0||j%2==1){
        k = log(decimal)/log(4);
    }
    else
    {
        k = log(decimal)/log(4) + 1;
    }

    printf("%d\n",k);

    return 0;
}