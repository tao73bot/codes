#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,l,d;
        cin >> n;
        string s,s1;
        d=n;
        while(n--)
        {
            cin >> s1;
            s+=s1;
        }
        sort(s.begin(), s.end());
        //cout << s << endl;
        l=s.size();
        if(l%d!=0){
            cout << "NO\n";
        }
        else{
            int cnt1=1,cnt2=0;

            for(i=1;i<l;i++){
                if(s[i]==s[i-1]){
                    cnt1++;
                }
                if(s[i]!=s[i-1]){
                    if(cnt1%d!=0){
                        //cout << cnt1<<"\n";
                        cnt2++;
                        cnt1=1;
                    }
                }
                if(s[i]!=s[i-1]){
                    if(cnt1%d==0){
                        cnt1=1;
                    }
                }
            }
            if(cnt2>0){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}