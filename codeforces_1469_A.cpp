#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i,l,a=0,b=0,c=0;
        string s;
        cin >> s;
        l=s.size();

        if(l%2==0&&s[0]!=')'&&s[l-1]!='('){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}