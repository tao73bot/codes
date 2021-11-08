#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,ans=1;
    cin >> k >> r;

    while(1)
    {
        if((k*ans)%10==0||(k*ans)%10==r){
            cout << ans << endl;
            break;
            //return 0;
        }
        ans++;
    }

    return 0;
}