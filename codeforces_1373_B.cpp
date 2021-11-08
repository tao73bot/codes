#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,d=0,c=0;
        char s[100];
        cin >> s;
        l = strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='0'){
                d++;
            }
            if(s[i]=='1'){
                c++;
            }
        }

        if(d>=c){
            if(c%2==0){
                cout << "NET" << endl;
            }
            else
            {
                cout << "DA" << endl;
            }
        }
        else
        {
            if(d%2==0){
                cout << "NET" << endl;
            }
            else
            {
                cout << "DA" << endl;
            }
        }
    }
    
    return 0;
}