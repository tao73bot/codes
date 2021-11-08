#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,i,l;
    char s[100];
    cin >> s;
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            a++;
        }
    }
    if(a>0){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}