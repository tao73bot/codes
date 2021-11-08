#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[102];
    int a =0,i;
    string s;
    cin >> s;

    for(i=0;i<s.size();i++){
        if(s[i]=='+'){
            continue;
        }
        else
        {
            ara[a++] = s[i] - '0';
        }
    }

    sort(ara,ara+a);

    for(i=0;i<a;i++){
        cout << ara[i];
        if(i==a-1){
            break;
        }
        
        cout << "+";
    }

    return 0;
}