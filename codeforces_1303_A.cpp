#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {   int i,l,ans=0,cnt=0,flag=0;
        string s;
        cin >> s;

        l=s.size();

        for(i=0;i<l;i++){
            if(s[i]=='1'){
                flag=1;
                ans+=cnt;
                cnt=0;
            }
            if(s[i]=='0'&&flag==1){
                cnt++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}