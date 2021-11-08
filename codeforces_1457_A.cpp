#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,r,c,ans;
        cin >> n >> m >> r >> c;

        ans=max(r-1,n-r)+max(c-1,m-c);

        cout << ans << endl;
    }
    return 0;
}