#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,i,l,n;
    cin >> n;
    string s;
    cin >> s;

    l = s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    //for(i=0;i<l;i++){
        //if(s[i]>='A'&&s[i]<='Z'){
            //s[i]='a'+(s[i]-'A');
        //}
    //}
    sort(s.begin(),s.end());

    for(i=0;i<l;i++){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }
    if(cnt<26){
        cout <<"NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}