#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    string s,s1,s2;
    cin >> s >> s1 >> s2;

    if(s1[0]=='6'){
        a+=6;
    }
    else if(s1[0]=='7'){
        a+=7;
    }
    else if(s1[0]=='8'){
        a+=8;
    }
    else if(s1[0]=='9'){
        a+=9;
    }
    else if(s1[0]=='T'){
        a+=10;
    }
    else if(s1[0]=='J'){
        a+=11;
    }
    else if(s1[0]=='Q'){
        a+=12;
    }
    else if(s1[0]=='K'){
        a+=13;
    }
    else if(s1[0]=='A'){
        a+=14;
    }
    if(s2[0]=='6'){
        b+=6;
    }
    else if(s2[0]=='7'){
        b+=7;
    }
    else if(s2[0]=='8'){
        b+=8;
    }
    else if(s2[0]=='9'){
        b+=9;
    }
    else if(s2[0]=='T'){
        b+=10;
    }
    else if(s2[0]=='J'){
        b+=11;
    }
    else if(s2[0]=='Q'){
        b+=12;
    }
    else if(s2[0]=='K'){
        b+=13;
    }
    else if(s2[0]=='A'){
        b+=14;
    }
    if(s1[1]==s[0]) a+=15;
    if(s2[1]==s[0]) b+=15;
    if((s1[1]==s[0]||s2[1]==s[0])||(s1[1]==s2[1])){
        if(a>b){
        cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
    return 0;
}