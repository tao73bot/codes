#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i,a,b,c,d,l;
        a=b=c=d=0;
        string s;
        cin >> s;
        l=s.size();

        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z') a++;
            if(s[i]>='A'&&s[i]<='Z'&&(i>=1&&i<l-1)) b++;
            if(s[i]>='0'&&s[i]<='9'&&(i>=1&&i<l-1)) c++;
            if((s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')&&(i>=1&&i<l-1)) d++;
        }
        if(a>0&&b>0&&c>0&&d>0&&l>=10) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}