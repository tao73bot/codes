#include <stdio.h>
#include <string.h>

int main()
{
    int t,len;
    char s[10];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s",s);
        len = strlen(s);
        
        if(len>3){
            printf("3\n");
        }
        else if((s[0]=='o'&&s[1]=='n')||(s[1]=='n'&&s[2]=='e')||(s[0]=='o'&&s[2]=='e')){
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
        
    }
    
    return 0;
}