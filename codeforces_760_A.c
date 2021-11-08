#include <stdio.h>

int main()
{
    int m,d,a;
    scanf("%d %d",&m,&d);
    
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
       a = ((31+d-2)/7) + 1;
    }
    if(m==2){
       a = ((28+d-2)/7) + 1;
    }
    if(m==4||m==6||m==9||m==11){
        a = ((30+d-2)/7) + 1;
    }

    printf("%d\n",a);

    return 0;
}