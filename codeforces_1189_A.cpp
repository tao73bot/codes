#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0;
    cin >> n;
    char s[n];
    cin >> s;
    if(n%2==1){
        cout << '1' << endl << s << endl;
    }
    else
    {
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                a++;
            }
            if(s[i]=='1'){
                b++;
            }
        }
        if(a==b){
            cout << '2' << endl << s[0]<<" ";
            for(int i=1;i<n;i++){
                cout << s[i] ;
            }
            cout << endl;
        }
        else
        {
            cout << '1' << endl << s << endl;;
        }
        
    }
    
    return 0;
}