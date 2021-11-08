#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,flag=0,cnt=0;
    string s1,s2;
    cin >> s1;
    cin >> s2;

    l=s1.size();

    for(i=0;i<l;i++){
        if(s2[i]<=s1[i]){
            cnt++;
        }
        else if(s2[i]>s1[i]){
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout << "-1\n";
    }
    else{
        cout << s2;
        cout << "\n";
    }

    return 0;
}