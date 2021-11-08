#include <stdio.h>
#include <string.h>

int main()
{
    char s1[102],s2[102],s3[102];
    int i,j,len1,len2,ans=0;
    gets(s1);
    gets(s2);
    len1 = strlen(s1);
    len2 = strlen(s2);

    for(i=0,j=len1-1;i<len1;i++,j--){
        s3[j] = s1[i];
    }
    for(i=0;i<len1;i++){
        s1[i]=s3[i];
    }

    if(len1==len2){
        for(i=0;i<len2;i++){
            if(s2[i]==s3[i]){
                ans++;
            }
        }
        if(ans==len2){
            printf("YES\n");
        }
        if(ans!=len2){
            printf("NO\n");
        }
    }

    else
    {
        printf("NO\n");
    }
    return 0;
}