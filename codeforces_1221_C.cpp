#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,mx,mn,ans=0;
        cin >> a >> b >> c;
        mx=max(a,b);
        mn=min(a,b);
        int d=mx-mn;
        c+=d;
        ans=min(mn,c);
        mx=mn-ans;
        mn=mn-ans;
        //c=c-ans;
        ans+=(mn+mn)/3;

        cout << ans << "\n";
    }
    return 0;
}