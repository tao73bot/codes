#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1,s2,cnt1=0,cnt2=0,cnt3=0,i;
    string s,t;
    cin >> s;
    cin >> t;
    s1=s.size();
    s2=t.size();
    if(s1!=s2){
        cout << "NO\n";
        return 0;
    }
    else{
        for(i=0;i<s1;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt1++;
            }
        }
        for(i=0;i<s1;i++){
            if((t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
                cnt2++;
            }
        }
        for(i=0;i<s1;i++){
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'){
                cnt3++;
            }
        }
        if(cnt1==cnt2&&cnt1==cnt3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        return 0;
    }
}