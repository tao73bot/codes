#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define endl '\n'

int main()
{
    SIS;
    int T;
    cin >> T;
    while (T--)
    {
        int a,b,d,ans=0;
        cin >> a >> b;
        d = abs(a-b);

        if(d>=5) ans = ans + (d/5),d=d%5;
        if(d>=2) ans = ans + (d/2),d =d%2;
        if(d>=1) ans = ans + d;
        cout << ans << endl;

    }
    return 0;
}