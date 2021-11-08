#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a=0,b=0,c=0,i,l1,l2,l3;
    char s[101],s1[101],s2[101];
    gets(s);
    gets(s1);
    gets(s2);
    l1=strlen(s);
    l2=strlen(s1);
    l3=strlen(s2);
    for(i=0;i<l1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') a++;
    }
    for(i=0;i<l2;i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u') b++;
    }
    for(i=0;i<l3;i++){
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u') c++;
    }
    if(a==5&&b==7&&c==5){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}