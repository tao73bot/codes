#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,cnt=0;
    string s;
    bool a=true,b=true;
    cin >> s;
    l=s.size();
    for(i=0;i<l-1;){
        if(s[i]=='A'&&s[i+1]=='B'&&a==true){
            a=false;
            i+=2;
        }
        if(s[i]=='B'&&s[i+1]=='A'&&a==false){
            b=false;
            i+=2;
        }
        else i++;
    }
    if(b==false){
        cout << "YES\n";
        return 0;
    }
    a=true,b=true;
    for(i=0;i<l-1;){
        if(s[i]=='B'&&s[i+1]=='A'&&a==true){
            a=false;
            i+=2;
        }
        if(s[i]=='A'&&s[i+1]=='B'&&a==false){
            b=false;
            i+=2;
        } 
        else i++;
    }
    if(b==false) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}