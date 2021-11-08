#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,a=0,b=0,i;
    string s;
    string x= "hello";
    cin >> s;
    for(i=0;i<s.size();i++){
        if(s[i]==x[a]){
            a++;
            b++;
        }
    }
    if(b==5){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}