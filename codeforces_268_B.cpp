#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin >> n;
    ans = n;
    for(int i=1;i<n;i++){
        ans+=(n-i)*i;
    }

    cout << ans << endl;

    return 0;
}