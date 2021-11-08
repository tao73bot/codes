#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a;
    cin >> n;
    char s[160];
    cin >> s;
    if(n%2==0){
        a=2;
    }
    else{
        a=3;
    }
    cout << s[0];
    for(i=1;i<n;i++){
        if(i%2==0 && i<=n-a){
            cout <<"-";
        }
        cout << s[i];
    }
    cout << endl;

    return 0;        
}