#include <stdio.h>
#include <string.h>

int main()
{
    int i,a=0,len;
    char s[100000];

    while(gets(s))
    {
        len = strlen(s);
        for(i=0;s[i];i++){
            if(s[i]=='\"'){
                a++;
                if(a%2==0){
                    printf("\'");
                    printf("\'");
                }
                else
                {
                    printf("`");
                    printf("`");
                }
            }
            else
            {
                printf("%c",s[i]);
            }
            
        }
        printf("\n"); 
    }

    return 0;
    
}