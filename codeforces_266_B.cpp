#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j;
    char s[51];
    cin >> n >> t;
    cin >> s;

    for(j=0;j<t;j++){
        for(i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
            else
            {
                continue;
            }
        }
    }

    cout << s << endl;

    return 0;
}