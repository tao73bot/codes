#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,a=0;
        cin >> n;
        string s;
        cin >> s;
        for(i=0;i<n;i++){
            if(s[i]=='8'){
                a=n-i;
                break;
            }
        }
        //cout << a <<"\n";
        if(a>=11){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}