#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,i,t1=0,t2=0,ans=0;
        string s;
        cin >> s;
        n=s.size();

        for(i=0;i<n;i++){
            if(s[i]=='(') t1++;
            if(s[i]=='[') t2++;
            if(s[i]==')' && t1>0){
                ans++;
                t1--;
            }
            if(s[i]==']' && t2>0){
                ans++;
                t2--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}