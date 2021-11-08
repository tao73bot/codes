#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,ans=0;
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            ans++;
        }
    }
    if(ans%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}