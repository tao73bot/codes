#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        string s;
        cin >> s;
        char c=s[n-1];
        bool a=false;
        for(i=0;i<n-1;i++){
            if(c==s[i]){
                a=true;
                break;
            }
        }
        if(a){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}