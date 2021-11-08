#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin >> s;
    int i,l,a=0;
    l=strlen(s);
    for(i=1;i<l;i++){
        if(s[i]>=65&&s[i]<=90){
            a++;
        }
    }

    if(a==l-1){
        for(i=0;i<l;i++){
            if(s[i]>=65&&s[i]<=90){
                s[i] = 97 + s[i] - 65;
            }
            else if(s[i]>=97&&s[i]<=122)
            {
                s[i] = 65 + s[i] - 97;
            }
            
        }
    }

    cout << s << endl;

    return 0;
}