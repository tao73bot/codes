#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,v1,v2,p,ans=0,s=0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while(p>0)
    {
        if(d1<=ans+1) p-=v1;
        if(d2<=ans+1) p-=v2;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}