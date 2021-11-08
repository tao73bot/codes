#include <stdio.h>
#include <string.h>

int main()
{
    int ans;
    char s1[102],s2[102];
    scanf("%s",s1);
    scanf("%s",s2);

    ans = strcasecmp(s1,s2);

    printf("%d\n",ans);
    
    return 0;
}