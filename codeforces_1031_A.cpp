#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,k,mx,mn,ans=0;
    cin >> w >> h >> k;
    mx=max(w,h);
    mn=min(w,h);

    while (k--)
    {
        ans+=2*(mx-2)+2*mn;
        mx-=4;
        mn-=4;
    }
    cout << ans << endl;

    return 0;
}