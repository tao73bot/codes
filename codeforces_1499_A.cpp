#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k1,k2,a,b,x,y;
        cin >> n >> k1 >> k2 >> a >> b;

        x=k1+k2;
        y=(2*n)-x;

        if(x/2>=a&&y/2>=b){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}