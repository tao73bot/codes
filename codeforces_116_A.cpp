#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=0,ans=0;
    while (n--)
    {
        int a,b;
        cin >> a >> b;
        x-=a;
        x+=b;
        ans = max(ans,x);
    }
    
    cout << ans << endl;

    return 0;
}