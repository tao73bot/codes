#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a=1,l;
    char s[102];
    cin >> s;
    l = strlen(s);
 
    for(int i=1;i<l;i++){
        if(s[i]==s[i-1]){
            a++;
            if(a==7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            a=1;
        }
        
        
    }

    cout << "NO" << endl;
    
    return 0;
}