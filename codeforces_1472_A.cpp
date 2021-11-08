#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,n,cnt=0,ans=1;
    cin >> a >> b >> n;
    if(n==1){
        cout << "YES\n";
        return;
    }
    else{
        if(a%2==1&&b%2==1){
            cout << "NO\n";
            return;
        }
        if(a%2==0||b%2==0){
            while(a%2!=1){
                a/=2;
                ans=(2*ans);
            }
            while (b%2!=1)
            {
                b/=2;
                ans=(2*ans);
            }
        }
    }
    if(ans>=n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}