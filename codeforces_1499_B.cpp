#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int l,i,a=0,b=0,c1=0,c2=0;
        cin >> s;
        l=s.size();
        for(i=0;i<l;i++){
            if(s[i]=='1') a++;
            if(s[i]=='0') b++;
        }
        if(b==l||a==l){
            cout << "YES\n";
        }
        else if(b!=l||a!=l){
            for(i=0;i<l-1;i++){
                if((s[i]==s[i+1]&&s[i]=='0')&&c2>0) c1++;
                if(s[i]==s[i+1]&&s[i]=='1') c2++;
            }
            if(c1>0&&c2>0){
                cout << "NO\n";
            }   
            else cout << "YES\n";
        }
    }
    return 0;
}