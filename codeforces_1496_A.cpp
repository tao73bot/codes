#include <bits/stdc++.h>
using  namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,i,cnt=0;
        string s;
        cin >> n >> k;
        cin >> s;
        if(n>2*k){
            for(i=0;i<k;i++){
                if(s[i]==s[n-1-i]) cnt++;
            }
            if(cnt==k){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}