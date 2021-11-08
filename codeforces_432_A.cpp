#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,x,ans=0;
    cin >> n >> k;
    while(n--)
    {
        cin >> x;
        if(x<=(5-k)){
            ans++;
        }
    }
    cout << ans/3 << endl;

    return 0;
}