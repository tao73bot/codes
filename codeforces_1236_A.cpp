#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,ans=0;
        cin >> a >> b >> c;

        while(b>=1&&c>=2){
            ans+=3;
            b--;
            c-=2;
        }
        while(a>=1&&b>=2){
            ans+=3;
            a--;
            b-=2;
        }
        cout << ans << "\n";
    }
}