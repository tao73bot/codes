#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1,a2,b1,b2,mx1,mx2,mn1,mn2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;

        mx1=max(a1,b1);
        mn1=min(a1,b1);
        mx2=max(a2,b2);
        mn2=min(a2,b2);

        if(mx1==mx2&&(mn1+mn2==mx1)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}