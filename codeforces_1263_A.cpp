#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,ans;
        cin >> a >> b >> c;
        ans = (a+b+c)/2;
        ans = min(ans,a+b);
        ans = min(ans,a+c);
        ans = min(ans,b+c);

        cout << ans << endl;
    }
    
    return 0;
}