#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a=0,ans=0,i;
        cin >> n;
        string s;
        cin >> s;

        for(i=0;i<n;i++){
            if(s[i]=='(') a++;
            if(s[i]==')'){
                a--;
                if(a<0){
                    a=0;
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}