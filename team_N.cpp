#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("collectingofficer.in", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0,l=0,u='B';
        cin >> n;
        char s[n];
        for(i=0;i<n;i++){
            cin >> s[i];
        }

        for(i=0;i<n;i++){
            if(cnt==25){
                break;
            }
            if(s[i]=='A'&&cnt==0){
                cnt++;
                l++;
            }
            if(s[i]==u&&cnt>0){
                cnt++;
                u++;
            }
            if(l>0){
                l++;
            }
        }
        cout << l << "\n";
    }
    return 0;
}