#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,b=0;
    cin >> n;
    char s[n];
    cin >> s;
    for(i=0;i<n-1;i++){
        if(s[i]=='S'&&s[i+1]=='F'){
            a++;
        }
        else if(s[i]=='F'&&s[i+1]=='S'){
            b++;
        }
    }
    if(a<=b||(a==0&&b==0)){
        cout << "NO" << endl;
    }
    else if(a>b){
        cout << "YES" << endl;
    }

    return 0;
}