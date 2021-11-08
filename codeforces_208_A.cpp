#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l;
    string s;
    cin >> s;

    l=s.size();
    for(i=0;i<l;i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            /*s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';*/
            i+=2;
        }
        else{
            cout << s[i];
            if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B'){
                cout << " ";
            }
        }
    }
    //cout << s << endl;
    cout << "\n";

    return 0;
}