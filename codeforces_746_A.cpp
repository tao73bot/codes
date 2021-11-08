#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ans=0;
    cin >> a >> b >> c;

    for(int i=a;i>=1;i--){
        if(c/i>=4&&b/i>=2){
            ans+=(i*7);
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}