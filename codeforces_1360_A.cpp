#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a,b,mx,mn;
        cin >> a >> b;
        mx=max(a,b);
        mn=min(a,b);

        if(2*mn>=mx){
            cout << (2*mn)*(2*mn) << endl;
        }
        else{
            cout << mx*mx << endl;
        }
    }
    return 0;
}