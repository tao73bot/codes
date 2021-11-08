#include <stdio.h>
#include <string.h>

int main()
{
    char word[80],reverse[80];
    int i,j,len;
    gets(word);

    len = strlen(word);

    for(i=0,j=len-1;i<len;i++,j--){
        reverse[i] = word[j];
    }

    reverse[i] = '\0';
    printf("%s\n",reverse);

    if(0==strcmp(word,reverse)){
        printf("%s is a palindrome.\n",word);
    }
    else
    {
        printf("%s is not a palindrome.\n",word);
    }
    
    return 0;
}