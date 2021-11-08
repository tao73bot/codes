#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m,ans;
        cin >> n>>m;

        if(n*m%2==0){
            ans = n*m/2;
        }
        else{
            ans = (n*m)/2 + 1;
        }

        cout << ans << endl;
    }

    return 0;
}