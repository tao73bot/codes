#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a=1,i,l;
        char s[50];
        cin >> s;
        l = strlen(s);
        for(i=0;i<l-1;i++){
            if(s[i]==s[i+1]){
                a*=2;
            }
        }
        cout << a << endl;
    }
    
    return 0;
}