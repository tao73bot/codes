#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,y,mx,mn;
        cin >> x >> y;

        mx=max(x,y);
        mn=min(x,y);

        if(mx==0&&mn==0){
            cout << "0\n";
        }
        else if(mx-mn>1){
            cout << 2*mx-1 << "\n";
        }
        else{
            cout << x+y << "\n";
        }
    }
    return 0;
}