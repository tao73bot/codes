#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];
    int i,count1=0,count2=0,len;
    gets(s);
    len=strlen(s);

    for(i=0;i<len;i++){
        if(s[i]>=65 && s[i]<=90){
            count1++;
        }
        if(s[i]>=97 && s[i]<=122){
            count2++;
        }
    }

    for(i=0;i<len;i++){
        if(count1>count2 &&(s[i]>=97 && s[i]<=122)){
            s[i]='A' + (s[i] - 'a');
        }
        if(count2>=count1 &&(s[i]>=65 && s[i]<=90)){
            s[i] = 'a' + (s[i] - 'A');
        }
    }

    printf("%s\n",s);

    return 0;
}