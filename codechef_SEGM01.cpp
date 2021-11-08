#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,i,cnt1=0,cnt2=1;
        string s;
        cin >> s;
        l=s.size();
        for(i=0;i<l;i++){
            if(s[i]=='1'){
                cnt1++;
            }
            if(s[i]=='1'&&s[i+1]=='1'){
                cnt2++;
            }
        }
        //cout << cnt2 << "\n";
        if(cnt1==cnt2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}