#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int i,l;
        string s;
        cin >> s;
        l=s.size();

        for(i=0;i<l;i++){
            if(i%2==0){
                if(s[i]>'a'){
                    cout << "a";
                }
                else{
                    cout << "b";
                }
            }
            else{
                if(s[i]=='z'){
                    cout << "y";
                }
                else{
                    cout << "z";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}