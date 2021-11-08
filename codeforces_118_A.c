#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];
    int i,len;
    gets(s);
    len = strlen(s);

    for(i=0;i<len;i++){
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y'){
            if(s[i]<='Z'){
                s[i] = 'a' + (s[i]-'A');
            }
            printf(".%c",s[i]);
        }
    }
    printf("\n");

    return 0;

}