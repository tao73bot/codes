#include <string.h>
#include <stdio.h>

int main()
{
    char s[100],s2[100];
    int i,j,k,len;
    gets(s);

    len = strlen(s);

    for(i=0,j=len-1;i<len;i++,j--){
        s2[i] = s[j];
        if(s[i]==s2[i]){
            k++;
        }
    }

    s2[i] = '\0';
    printf("%s\n",s2);

    if(k==len){
        printf("%s is a palindrome.\n",s);
    }
    else
    {
        printf("%s is not a palindrome.\n",s);
    }

    return 0;   
}