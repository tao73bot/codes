#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long x1,y1,x2,y2,ans;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==x2||y1==y2){
            ans=fabs(x1-x2)+fabs(y1-y2);
        }
        else{
            ans=fabs(x1-x2)+fabs(y1-y2)+2;
        }
        cout << ans << endl;
    }
    return 0;
}