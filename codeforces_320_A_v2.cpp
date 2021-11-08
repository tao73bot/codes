#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;

    for(i=0;i<s.size();){
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
            i+=3;
        }
        else if(s[i]=='1'&&s[i+1]=='4'){
            i+=2;
        }
        else if(s[i]=='1'){
            i++;
        }
        else{
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << "YES\n";

    return 0;
}