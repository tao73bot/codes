#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,ans=0,k;
    char s[10];
    cin >> T;
    while (T--)
    {
        cin >> s;
        if(!strcmp(s, "donate"))
        {
            cin >> k;
            ans+=k;
        }
        else
        {
            cout << ans << endl;
        }
    }
    
    return 0;
}