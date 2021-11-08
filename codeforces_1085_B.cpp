#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,ans,i;
    cin >> n >> k;

    for(i=k-1;i>=1;i--){
        if(n%i==0){
            ans=k*(n/i)+i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}