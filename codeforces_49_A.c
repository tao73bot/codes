#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];
    int i,len;
    gets(s);

    len = strlen(s);

    for(i=len-2;i>=0;i--){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y'){
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
        else
        {
            continue;
        }
        
    }
    
    return 0;
}