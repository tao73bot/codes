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
        long long n,k,i;
        cin >> n >> k;
        long long a[k];
        for(i=0;i<k;i++){
            cin >> a[i];
        }
        while(n--)
        {
            string s;
            cin >> s;
            long long ans=0;
            for(i=0;i<k;i++){
                if(s[i]=='1') ans+=a[i];
            }
            cout << ans << "\n";
        }
    }
    return 0;
}