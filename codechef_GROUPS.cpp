#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,cnt=0;
        string s;
        cin >> s;
        n=s.size();

        for(i=0;i<n;i++){
            if(s[i]=='1'&&(s[i+1]=='0'||i+1==n)){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}