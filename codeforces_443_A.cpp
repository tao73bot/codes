#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,ans=0;
    char s[1002];
    gets(s);
    
    l=strlen(s);
    sort(s,s+l);
    //cout << s << "\n";

    for(i=0;i<l;i++){
        if(s[i]>='a'&&s[i]<='z'){
            ans++;
            if(s[i]==s[i+1]){
                ans--;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}