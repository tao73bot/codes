#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,i,cnt=0;
    string s;
    cin >> s;
    l=s.size();
    for(i=0;i<l;i++){
        if(s[i]=='a'){
            cnt++;
        }
    }

    if(cnt>l/2){
        cout << l << "\n";
    }
    else{
        cout << (2*cnt)-1<<"\n";
    }
    return 0;
}