#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<n;i++){
        if(s[i]=='+'){
            a++;
        }
        if(s[i]=='-'&&a>=1){
            a--;
        }
    }
    cout << a << "\n";
    return 0;
}